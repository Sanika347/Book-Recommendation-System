#pragma once
#include <string>
using namespace std;

class Book {
public:
    string isbn, title, author;

    Book(string i, string t, string a);
    void display();
};
