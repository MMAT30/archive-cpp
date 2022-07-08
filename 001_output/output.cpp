// g++ --std=gnu++20 program.cpp
#include <iostream>
#include <bitset>

int main() {

    // vars
    unsigned short int i1 = 1234;

    // output via std::cout
    std::cout << "hello world!\n";

    // std::showbase - shows base system of data type
    // std::dec - decimal representation
    // std::oct - octal representation
    // std::hex - hex representation
    std::cout << "int to dec:\t\t" << std::showbase << std::dec << i1 << std::endl;
    std::cout << "int to oct:\t\t" << std::showbase << std::oct << i1 << std::endl;
    std::cout << "int to hex:\t\t" << std::showbase << std::hex << i1 << std::endl;
    std::cout << "int to bin:\t\t" << std::bitset<16>(i1) << std::endl;

    return 0;
}