#include "MyStr.h"
#include <iostream>

int main() {
    MyStr s;
    const std::string s1 = "hihi";
    const std::string s2 = "sdfs";
    s.push_back(s1);
    s.push_back(s2);

    auto b = s.begin();
    while (b != s.end()) {
        std::cout << *b++ << std::endl;
    }
    return 0;
}