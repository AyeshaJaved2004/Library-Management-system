#ifndef SPRING2024_CE101_OOP_LAB7_BSCE23029_LIBRARYITEM_H
#define SPRING2024_CE101_OOP_LAB7_BSCE23029_LIBRARYITEM_H
#include <iostream>
using namespace std;
#include<string>
class LibraryItem {
protected:
    std::string title;
    std::string location;
    bool available;

public:
    LibraryItem(){}
    LibraryItem(string title, string location,bool available);
    void checkout(const std::string& borrower);
    void checkin();
};

#endif //SPRING2024_CE101_OOP_LAB7_BSCE23029_LIBRARYITEM_H
