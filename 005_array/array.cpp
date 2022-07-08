#include <iostream>


int main() {

    // creating a unsized array
    int a1[] = {1,2,3};

    // creating sized multidimensional array
    int a2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};


    // looping thru arrays
    for (auto x : a1) {
        std::cout << x << std::endl;
    }

    for (int x = 0; x < sizeof(a1) / sizeof(a1[0]); x++) {
        std::cout << a1[x] << std::endl;
    }



    // accessing the array
    std::cout << a1[0] << std::endl;
    std::cout << a1[1] << std::endl;
    std::cout << a1[2] << std::endl << std::endl;

    // modifying array data
    a1[0] = 3;
    a1[1] = 2;
    a1[2] = 1;

    // accessing the array
    std::cout << a1[0] << std::endl;
    std::cout << a1[1] << std::endl;
    std::cout << a1[2] << std::endl << std::endl;






    // accessing 2D array
    std::cout << a2[2][0] << std::endl;
    std::cout << a2[2][1] << std::endl;
    std::cout << a2[2][2] << std::endl << std::endl;

    // modifying 2D array data
    a2[2][0] = 3;
    a2[2][1] = 2;
    a2[2][2] = 1;

    // accessing 2D array
    std::cout << a2[2][0] << std::endl;
    std::cout << a2[2][1] << std::endl;
    std::cout << a2[2][2] << std::endl << std::endl;

    return 0;
}