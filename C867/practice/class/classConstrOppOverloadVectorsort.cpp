#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Review {
public:
   void SetRatingAndComment(int revRating, string revComment) {
      rating = revRating;
      comment = revComment;
   }
   int GetRating() const { return rating; }
   string GetComment() const { return comment; }
   
private:
   int rating = -1;
   string comment = "NoComment";
};

// Less-than (<) operator for two Review objects
bool operator<(const Review& lhs, const Review& rhs) {
   return lhs.GetRating() < rhs.GetRating();
}

int main() {
   vector<Review> reviewList;
   Review currentReview;
   int currentRating;
   string currentComment;
   int i;
   
   cout << "Type rating + comments. To end: -1" << endl;
   cin >> currentRating;
   while (currentRating >= 0) {
      getline(cin, currentComment); // Gets rest of line
      currentReview.SetRatingAndComment(currentRating, currentComment);
      reviewList.push_back(currentReview);
      cin >> currentRating;
   }

   // Sort reviews from lowest to highest
   sort(reviewList.begin(), reviewList.end());

   /*
     // or withouth the overload we can use a lamdba:

    sort(reviewList.begin(), reviewList.end(),
     [](const Review& a, const Review& b) {
         return a.GetRating() < b.GetRating();
     });

     // reverse
     sort(reviewList.begin(), reviewList.end(),
     [](const Review& a, const Review& b) {
         return a.GetRating() > b.GetRating();  // reverse!
     });


   */

   cout << endl;
   for (i = 0; i < reviewList.size(); ++i) {
      cout << reviewList.at(i).GetRating() << ": "
           << reviewList.at(i).GetComment() << endl;
   }
   
   return 0;
}