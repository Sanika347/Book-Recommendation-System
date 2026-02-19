#include <iostream>
#include <unordered_map>
#include "../include/csv_reader.h"

using namespace std;

int main() {

    cout << "Loading Books...\n";
    vector<Book> books = loadBooks("../data/Books.csv");

    cout << "Loading Ratings...\n";
    vector<Rating> ratings = loadRatings("../data/Ratings.csv");

    auto bookMap = createBookMap(books);

    cout << "✅ Books Loaded: " << books.size() << endl;
    cout << "✅ Ratings Loaded: " << ratings.size() << endl;

    string isbnSearch;

    cout << "\nEnter ISBN to search: ";
    cin >> isbnSearch;

    if (bookMap.find(isbnSearch) != bookMap.end()) {
        bookMap[isbnSearch].display();
    } else {
        cout << "Book not found\n";
    }

    // ⭐ Show top rated books
    unordered_map<string, pair<int, int>> ratingStats;

    for (auto &r : ratings) {
        ratingStats[r.isbn].first += r.rating;
        ratingStats[r.isbn].second += 1;
    }

    cout << "\n📊 Top Rated Books:\n";

    int count = 0;

    for (auto &it : ratingStats) {

        double avg = (double)it.second.first / it.second.second;

        if (avg >= 4.5 && bookMap.find(it.first) != bookMap.end()) {
            bookMap[it.first].display();
            count++;
        }

        if (count == 5) break;
    }

    return 0;
}
