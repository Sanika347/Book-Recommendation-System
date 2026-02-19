#include "../include/rating.h"

Rating::Rating(int uid, string bookIsbn, int rate) {
    userId = uid;
    isbn = bookIsbn;
    rating = rate;
}
