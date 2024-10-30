#include <iostream>
using namespace std;
#include "Book.h"
#include "LibraryItem.h"
Book::Book(string title, string author, string genre, string location)//constructor
{
    this->title=title;
    this->author=author;
    this->genre=genre;
    this->location=location;
}
//checkout function
void Book::checkout(const std::string& borrower) {
    if (available) {
        std::cout << title << " by " << author <<" has been checked out by " << borrower << "." << std::endl;
        available = false;
    } else {
        std::cout << title << " is already checked out." << std::endl;
    }
}
//check in function
void Book::checkin() {
    if (!available) {
        std::cout << title << " by " << author <<" has been checked in." << std::endl;
        available = true;
    } else {
        std::cout << title << " is already checked in." << endl;
    }
}
