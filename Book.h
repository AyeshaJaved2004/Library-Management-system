#ifndef SPRING2024_CE101_OOP_LAB7_BSCE23029_BOOK_H
#define SPRING2024_CE101_OOP_LAB7_BSCE23029_BOOK_H
#include <iostream>
#include "LibraryItem.h"
using namespace std;
#include <string>


class Book : public LibraryItem{
private:
    std::string author;
    std::string genre;

public:
    Book(string title, string author, string genre, string location);

    void checkout(const std::string& borrower);
    void checkin();
};
#endif //SPRING2024_CE101_OOP_LAB7_BSCE23029_BOOK_H
