#include "rating.h"
#include <unordered_map>

vector<Rating> loadRatings(string filename);

// Fast search maps
unordered_map<string, Book> createBookMap(const vector<Book>& books);
