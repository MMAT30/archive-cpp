#include <iostream>
#include <string>

int main() {

    // const int - const cannot be changed after the first initialization
    const int i = 0;     
    std::cout << "type int value:\t\t" << i << "\nsize of int:\t\t" << sizeof(i) << "\n\n";

    // double - double the size of a float    
    double d = 0.0;
    std::cout << "type double value:\t" << d << "\nsize of double:\t\t" << sizeof(d) << "\n\n";

    // float - floating point data type    
    float f = 0.0;    
    std::cout << "type float value:\t" << f << "\nsize of float:\t\t" << sizeof(f) << "\n\n";

    // bool - boolean value true or false and can also in the form 0 or 1             
    bool b = true;
    std::cout << "type bool value:\t" << b << "\nsize of bool:\t\t" << sizeof(b) << "\n\n";

    // char - a string character
    char c = 'z';
    std::cout << "type char value:\t" << c << "\nsize of char:\t\t" << sizeof(c) << "\n\n";

    // std::string = a group of ordered characters that make a string
    std::string s = "string";
    std::cout << "type string value:\t" << s << "\nsize of string:\t\t" << sizeof(s) << "\n\n";




    // const expressions - constants that get evaluated at complile time rather than runtime
    constexpr double pi = 3.14;
    std::cout << "constexpr pi:\t\t" << pi << std::endl;




    return 0;
}