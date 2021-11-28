//
// Created by JH L on 2020/4/16.
//
#include <variant>
#include <string>
#include <iostream>

struct Entry {
    std::string name;
    std::variant<int, double, char> v;
};

int main() {
    Entry entry;
    std::cout << sizeof(entry.v);
    return 0;
}
