#include <iostream>
#include <string>
using namespace std;

class Essay {
   public:
      Essay();
      void SetYear(int essayYear);
		void SetNumWords(int essayNumWords);
		void SetTitle(string essayTitle);
      void Print();

   private:
      int year;
		int numWords;
		string title;
};

Essay::Essay() {
    year = -1;
    numWords = 0;
    title = "Unstated";
}

void Essay::SetYear(int essayYear) {
	year = essayYear;
}

void Essay::SetNumWords(int essayNumWords) {
	numWords = essayNumWords;
}

void Essay::SetTitle(string essayTitle) {
	title = essayTitle;
}

void Essay::Print() {
   cout << "Year: " 
        << year 
        << ", Number of words: " 
        << numWords 
        << ", Title: " 
        << title 
        << endl;
}

int main() {
   int newYear;
	int newNumWords;
	string newTitle;
   Essay essay1;

   essay1.Print();
   
   cin >> newYear;
	cin >> newNumWords;
	cin >> newTitle;

   essay1.SetYear(newYear);
	essay1.SetNumWords(newNumWords);
	essay1.SetTitle(newTitle);

   essay1.Print();

   return 0;
}