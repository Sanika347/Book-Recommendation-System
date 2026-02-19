vector<Rating> loadRatings(string filename) {

    vector<Rating> ratings;
    ifstream file(filename);
    string line;

    getline(file, line);

    while (getline(file, line)) {

        stringstream ss(line);
        string uid, isbn, rate;

        getline(ss, uid, ',');
        getline(ss, isbn, ',');
        getline(ss, rate, ',');

        ratings.push_back(Rating(stoi(uid), isbn, stoi(rate)));
    }

    return ratings;
}
unordered_map<string, Book> createBookMap(const vector<Book>& books) {

    unordered_map<string, Book> bookMap;

    for (const auto &b : books) {
        bookMap[b.isbn] = b;
    }

    return bookMap;
}
