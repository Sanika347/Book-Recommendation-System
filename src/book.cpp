#include "../include/book.h"
#include <iostream>

Book::Book(string i, string t, string a) {
    isbn = i;
    title = t;
    author = a;
}

void Book::display() {
    cout << isbn << " | " << title << " | " << author << endl;
}
