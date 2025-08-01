#include <iostream>
#include <string>
using namespace std;

/*
    Up is not equal to Frozen
It is at least as good as Up
*/
class Movie {
public:
   Movie(string movieTitle);
   void SetVotes(int numUpVotes, int numDownVotes) {
      upVotes = numUpVotes;
      downVotes = numDownVotes;
   }
   string GetTitle() const { return title; }
   int GetVoteDifference() const { return upVotes - downVotes; }

private:
   string title;
   int upVotes;
   int downVotes;
};

Movie::Movie(string movieTitle) {
   title = movieTitle;
   upVotes = 0;
   downVotes = 0;
}

bool operator==(const Movie& movie1, const Movie& movie2) {
   return movie1.GetVoteDifference() == movie2.GetVoteDifference();
}

bool operator!=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 == movie2); 
}

bool operator<(const Movie& movie1, const Movie& movie2) {
   return movie1.GetVoteDifference() < movie2.GetVoteDifference();
}

bool operator>(const Movie& movie1, const Movie& movie2) { 
   return movie2 < movie1; 
}

bool operator<=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 > movie2); 
}

bool operator>=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 < movie2); 
}

int main() {
   Movie movie1("Cars");
   Movie movie2("Up");
   Movie movie3("It");
   Movie movie4("Frozen");

   movie1.SetVotes(11, 2);
   movie2.SetVotes(13, 5);
   movie3.SetVotes(15, 4);
   movie4.SetVotes(14, 1);

   if (movie2 != movie4) {
      cout << movie2.GetTitle();
      cout << " is not equal to "; 
      cout << movie4.GetTitle() << endl;
   }

   if (movie3 >= movie2) {
      cout << movie3.GetTitle();
      cout << " is at least as good as ";
      cout << movie2.GetTitle() << endl;
   } 
   else if (movie1 > movie2) {
      cout << movie1.GetTitle();
      cout << " is better than ";
      cout << movie2.GetTitle() << endl;
   }

   return 0;
}