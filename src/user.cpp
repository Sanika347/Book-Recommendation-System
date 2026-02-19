#include "../include/user.h"
#include <iostream>

User::User(int id, string loc, int age) {
    userId = id;
    location = loc;
    this->age = age;
}

void User::display() {
    std::cout << userId << " | "
              << location << " | "
              << age << std::endl;
}
