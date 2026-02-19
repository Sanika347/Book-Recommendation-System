#pragma once
using namespace std;

class Rating {
public:
    int userId;
    string isbn;
    int rating;

    Rating(int uid, string bookIsbn, int rate);
};
