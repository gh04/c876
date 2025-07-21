#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
using namespace std;

/* ----------  Review (single rating + comment)  ---------- */
class Review {
public:
    void SetRatingAndComment(int revRating, const string& revComment) {
        rating = revRating;
        comment = revComment;
    }
    int    GetRating()  const { return rating; }
    string GetComment() const { return comment; }

private:
    int    rating  = -1;
    string comment = "NoComment";
};

/* ----------  Reviews (collection of Review objects)  ---------- */
class Reviews {
public:
    void InputReviews();                         // read until -1
    void PrintCommentsForRating(int rating)const;// print all w/ that rating
    double GetAverageRating() const;             // average of all ratings

private:
    vector<Review> reviewList;
};

/* read rating/comment pairs until user types –1 */
void Reviews::InputReviews() {
    int    rating;
    string comment;

    if (!(cin >> rating)) { return; }            // no input, bail out
    while (rating >= 0) {
        getline(cin >> ws, comment);             // eat leading ws, then comment
        Review r;
        r.SetRatingAndComment(rating, comment);
        reviewList.push_back(r);

        cin >> rating;
    }
}

/* print every comment whose rating matches */
void Reviews::PrintCommentsForRating(int rating) const {
    for (const auto& r : reviewList)
        if (r.GetRating() == rating) cout << r.GetComment() << '\n';
}

/* average rating (returns 0 on empty list) */
double Reviews::GetAverageRating() const {
    if (reviewList.empty()) return 0.0;

    double sum = 0.0;
    for (const auto& r : reviewList) sum += r.GetRating();
    return sum / reviewList.size();
}

/* ----------  Restaurant (has a name + Reviews)  ---------- */
class Restaurant {
public:
    void SetName(const string& restaurantName) { name = restaurantName; }
    void ReadAllReviews()               { cout << "Type ratings + comments. To end: -1\n"; reviews.InputReviews(); }
    void PrintCommentsByRating() const;
    void PrintAverage()          const { cout << "\nAverage rating: " << fixed << setprecision(2) << reviews.GetAverageRating() << '\n'; }

private:
    string  name;
    Reviews reviews;
};

void Restaurant::PrintCommentsByRating() const {
    cout << "\nComments for each rating level:\n";
    for (int rating = 1; rating <= 5; ++rating) {
        cout << rating << ":\n";
        reviews.PrintCommentsForRating(rating);
    }
}

/* -------------------  main  ------------------- */
int main() {
    Restaurant place;
    string name;

    cout << "Type restaurant name:\n";
    getline(cin, name);
    place.SetName(name);

    place.ReadAllReviews();
    place.PrintAverage();
    place.PrintCommentsByRating();
    return 0;
}
