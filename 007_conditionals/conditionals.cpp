#include <iostream>
#include <string>

int main() {

    // vars
    int i1 = 2;
    bool b1 = true;




    // if 
    if (b1 == true) {
        std::cout << "if statement" << std::endl;
    }
    // else if
    else if (b1 == false) {
        std::cout << "else if statement" << std::endl;
    }
    // else
    else {
        std::cout << "else statement" << std::endl;
    }







    // ternerary
    std::string t = b1 ? "true" : "false";
    std::cout << "ternerary: " << t << std::endl;




    // switch
    switch (i1) {
        case 1:
            std::cout << "case 1" << std::endl;

        case 2:
            std::cout << "case 2" << std::endl;
    
        default:
            std::cout << "default case" << std::endl;
    }

    return 0;
}