#include <iostream>
#include <string>

int main() {

    // vars
    std::string str1 = "string";
    std::cout << "str1:\t\t" << str1 << std::endl;
    std::cout << "length:\t\t" << str1.length() << std::endl << std::endl;

    // substr - sub string
    std::cout << str1.substr(0,3) << std::endl;


    return 0;
}