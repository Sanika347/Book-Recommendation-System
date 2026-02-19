#pragma once
#include <string>
using namespace std;

class User {
public:
    int userId;
    string location;
    int age;

    User(int id, string loc, int age);
    void display();
};
