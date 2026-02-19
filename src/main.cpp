#include <iostream>
#include <vector>
#include "../include/csv_reader.h"

using namespace std;

int main() {

    vector<Book> books = loadBooks("../data/Books.csv");

    cout << "Books Loaded: " << books.size() << endl;

    string search;
    cout << "Enter book title: ";
    getline(cin, search);

    for (auto &b : books) {
        if (b.title.find(search) != string::npos) {
            b.display();
            return 0;
        }
    }

    cout << "Book not found\n";
}
