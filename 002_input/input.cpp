// g++ --std=gnu++20 program.cpp
#include <iostream>
#include <string>

int main() {

    // vars
    std::string str;

    // message
    std::cout << "Enter something: ";

    // input
    std::cin >> str;

    // output via std::cout
    std::cout << "You entered " << str << "!\n";

    return 0;
}