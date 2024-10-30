#include <iostream>
using namespace std;
#include "Book.h"
#include "LibraryItem.h"
#include<string>
int main() {
    Book book("C++ for Every", "Usama Riaz", "Programming", "Computer Science Section");
    book.checkout("Najeeb");
    book.checkout("Shayan"); // Already checked out, should display a message
    book.checkin();
    book.checkin(); // Already checked in, should display a message

    return 0;
}
