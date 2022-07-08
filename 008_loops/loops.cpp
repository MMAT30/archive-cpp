// g++ -std=gnu++20 loops.cpp
#include <iostream>

int main() {

    // vars
    int a[] = {1,2,3,4,5,6,7,8,9};
    int i1 = 0;
    int i2 = 0;

    // for loop
    for (int x = 0; x < 9; x++) {
        std::cout << a[x] << std::endl;
    }

    // for loop - range based
    for (int x : a) {
        std::cout << x << std::endl;
    }




    // while loop
    while (i1 <= 2) {
        std::cout << i1 << std::endl;
        i1++;

        if (i1 == 1000) {
            // break - breaks free of the loop
            break;
        }
        else {
            // continue - just continues execution of program
            continue;
        }
    }

    // do while
    do {
        std::cout << i2 << std::endl;
        i2++;
    } while (i2 <= 2);

    return 0;
}