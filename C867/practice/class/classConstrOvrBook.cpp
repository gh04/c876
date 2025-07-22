#include <iostream>
#include <string>
using namespace std;

class Book {
   public:
      Book();
      Book(string bookTitle, string bookAuthor, int bookYear);
      void Print();
   
   private:
      string title;
      string author;
      int year;
};

// Default constructor
Book::Book() {
   title = "None";
   author = "Unnamed";
   year = -1;
}

Book::Book(string bookTitle, string bookAuthor, int bookYear) {
    this->title = bookTitle;
    this->author = bookAuthor;
    this->year = bookYear;
}

/* Your code goes here */

void Book::Print() {
   cout << "Book: " << title << ", " << author << ", " << year << endl;
}

int main() {
   string bookTitle;
   string bookAuthor;
   int bookYear;
   
   cin >> bookTitle;
   cin >> bookAuthor;
   cin >> bookYear;
   
   Book emptyBook;
   Book book1(bookTitle, bookAuthor, bookYear);
   
   emptyBook.Print();
   book1.Print();

   return 0;
}