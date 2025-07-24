#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    Type rating + comments. To end: -1
5 Great place!
5 Loved the food.
2 Pretty bad service.
4 New owners are nice.
2 Yuk!!!
4 What a gem.     
-1

2  Pretty bad service.
*/

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

// Equality (==) operator for two Review objects
bool operator==(const Review& lhs, const Review& rhs) {
   return (lhs.GetRating() == rhs.GetRating()) && 
          (lhs.GetComment() == rhs.GetComment());
}

// Less-than (<) operator for two Review objects
bool operator<(const Review& lhs, const Review& rhs) {
   return lhs.GetRating() < rhs.GetRating();
}

int main() {
   vector<Review> reviewList;
   Review currentReview;
   Review lowestReview;
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
   
   // Find and output lowest review
   lowestReview = reviewList.at(0);
   for (i = 1; i < reviewList.size(); ++i) {
      if (reviewList.at(i) < lowestReview ) {
         lowestReview = reviewList.at(i);
      }
   }
   
   cout << endl;
   cout << lowestReview.GetRating() << " "
        << lowestReview.GetComment() << endl;
   
   return 0;
}