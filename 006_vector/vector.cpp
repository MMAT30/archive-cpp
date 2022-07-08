#include <iostream>
#include <vector>

int main()
{
    // unsized int vector
    std::vector<int> v1;

    // sized int vector of 3 values
    std::vector<int> v2(3);




    // size - returns the size of the vector
    std::cout << "size of v1: " << v1.size() << std::endl;

    // adding elements to the vector
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);

    // size - returns the size of the vector
    std::cout << "size of v1: " << v1.size() << std::endl;

    // accessing vector via at method
    std::cout << v1.at(0) << std::endl;
    std::cout << v1.at(1) << std::endl;
    std::cout << v1.at(2) << std::endl;

    // pop - removes element from vector
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    // size - returns the size of the vector
    std::cout << "size of v1: " << v1.size() << std::endl;





    // size - returns the size of the vector
    std::cout << "size of v2: " << v2.size() << std::endl;

    // accessing vector via at method
    std::cout << v2.at(0) << std::endl;
    std::cout << v2.at(1) << std::endl;
    std::cout << v2.at(2) << std::endl;

    // size - returns the size of the vector
    std::cout << "size of v2: " << v2.size() << std::endl;

    // clear - clears the entire vector of elements
    v2.clear();

    // size - returns the size of the vector
    std::cout << "size of v2: " << v2.size() << std::endl;

    return 0;
}