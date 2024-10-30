#include <iostream>
#include "LibraryItem.h"
using namespace std;
#include<string>

LibraryItem::LibraryItem(string title, string location,bool available)//parameterize constructor
        : title(title), location(location), available(true) {}
//checkout function
void LibraryItem::checkout(const std::string& borrower) {
    if (available) {
        std::cout << title << " has been checked out by " << borrower << "." << std::endl;
        available = false;
    } else {
        std::cout << title << " is already checked out." << std::endl;
    }
}
//checkin function
void LibraryItem::checkin() {
    if (!available) {
        std::cout << title << " has been checked in." << std::endl;
        available = true;
    } else {
        std::cout << title << " is already checked in." << std::endl;
    }
}

