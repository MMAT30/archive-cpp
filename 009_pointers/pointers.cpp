// g++ --std=gnu++20 program.cpp
#include <iostream>

int main() {

    // declaring pointers
    char *c;
    int *i;
    double *d;

    // declaring variables
    char ch = 'z';
    int in = 777;
    double db = 77.7;



    // char pointer
    std::cout << std::string(50, '=') << std::endl << std::endl;
    std::cout << "*char size:\t\t" << sizeof(c) << std::endl;
    std::cout << "*char address:\t\t" << &c << std::endl;
    std::cout << "*char value:\t\t" << (void *)c << "\t- garbage" << std::endl;
    std::cout << "*char points to:\t\t" << *c << "\t- points to garbage" << std::endl << std::endl;

    std::cout << "char size:\t\t" << sizeof(ch) << std::endl;
    std::cout << "char address:\t\t" << (void *)&ch << std::endl;
    std::cout << "char value:\t\t" << ch << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;


    // int pointer
    std::cout << "*int size:\t\t" << sizeof(i) << std::endl;
    std::cout << "*int address:\t\t" << &i << std::endl;
    std::cout << "*int value:\t\t" << *i << "\t- garbage" << std::endl;
    std::cout << "*int points to:\t\t" << i << "\t- points to garbage" << std::endl << std::endl;

    std::cout << "int size:\t\t" << sizeof(in) << std::endl;
    std::cout << "int address:\t\t" << &in << std::endl;
    std::cout << "int value:\t\t" << in << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;


    // double pointer
    std::cout << "*double size:\t\t" << sizeof(d) << std::endl;
    std::cout << "*double address:\t" << &d << std::endl;
    std::cout << "*double value:\t\t" << *d << "\t- garbage" << std::endl;
    std::cout << "*double points to:\t" << d << "\t- points to garbage" << std::endl << std::endl;

    std::cout << "double size:\t\t" << sizeof(db) << std::endl;
    std::cout << "double address:\t\t" << &db << std::endl;
    std::cout << "double value:\t\t" << db << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;



    // pointers pointing to variables
    c = &ch;
    i = &in;
    d = &db;



    // char pointer
    std::cout << std::string(50, '=') << std::endl << std::endl;
    std::cout << "*char size:\t\t" << sizeof(c) << std::endl;
    std::cout << "*char address:\t\t" << &c << std::endl;
    std::cout << "*char value:\t\t" << (void *)c << std::endl;      
    std::cout << "*char points to:\t" << *c << std::endl << std::endl;

    std::cout << "char size:\t\t" << sizeof(ch) << std::endl;
    std::cout << "char address:\t\t" << (void *)&ch << std::endl;
    std::cout << "char value:\t\t" << ch << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;

    // int pointer
    std::cout << "*int size:\t\t" << sizeof(i) << std::endl;
    std::cout << "*int address:\t\t" << &i << std::endl;
    std::cout << "*int value:\t\t" << *i << std::endl;
    std::cout << "*int points to:\t\t" << i << std::endl << std::endl;

    std::cout << "int size:\t\t" << sizeof(in) << std::endl;
    std::cout << "int address:\t\t" << &in << std::endl;
    std::cout << "int value:\t\t" << in << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl;


    // double pointer
    std::cout << "*double size:\t\t" << sizeof(d) << std::endl;
    std::cout << "*double address:\t" << &d << std::endl;
    std::cout << "*double value:\t\t" << *d << std::endl;
    std::cout << "*double points to:\t" << d << std::endl << std::endl;

    std::cout << "double size:\t\t" << sizeof(db) << std::endl;
    std::cout << "double address:\t\t" << &db << std::endl;
    std::cout << "double value:\t\t" << db << std::endl << std::endl << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;



    // const pointer to non-const value 
    int v1 = 1;
    int v2 = 2;
    const int *p1 = &v1;

    // this is allowed
    // pointer can point to diffrent value
    p1 = &v2;

    // this is allowed
    // non-const variable can change value
    v2 = 777;

    // this is not allowed
    // we cannot dereference value to change it value
    // *p1 = 123;   // compiler err

    std::cout << "*p1 -> v2:\t\t" << *p1 << std::endl;
    std::cout << "v1 value:\t\t" << v1 << std::endl;
    std::cout << "v2 value:\t\t" << v2 << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;



    // const pointer to const value 
    const int v3 = 1;
    const int v4 = 2;
    const int *p2 = &v3;

    // this is allowed
    // pointer can point to diffrent value
    p2 = &v4;

    // this is not allowed
    // const variable cannot change value
    // v4 = 777;

    // this is not allowed
    // we cannot dereference value to change it value
    // *p2 = 123;   // compiler err

    std::cout << "*p2 -> v4:\t\t" << *p2 << std::endl;
    std::cout << "v3 value:\t\t" << v3 << std::endl;
    std::cout << "v4 value:\t\t" << v4 << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;




    // const pointer const to const value
    const int v5 = 1;
    const int v6 = 2;
    const int* const p3 = &v5;

    // this is not allowed
    // pointer cannot point to diffrent value
    // p3 = &v6;    // compiler error

    // this is not allowed
    // const variable cannot change value
    // v6 = 777;

    // this is not allowed
    // we cannot dereference value to change it value
    // *p3 = 123;   // compiler err

    std::cout << "*p3 -> v5:\t\t" << *p3 << std::endl;
    std::cout << "v5 value:\t\t" << v5 << std::endl;
    std::cout << "v6 value:\t\t" << v6 << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;



    // pointer const to non-const value
    int v7 = 1;
    int v8 = 2;
    int* const p4 = &v7;

    // this is not allowed
    // pointer cannot point to diffrent value
    // p4 = &v8;    // compiler error

    // this is allowed
    // variable can change value
    v7 = 777;

    // this is allowed
    // we can dereference value to change it value
    *p4 = 123;  

    std::cout << "*p4 -> v7:\t\t" << *p3 << std::endl;
    std::cout << "v7 value:\t\t" << v7 << std::endl;
    std::cout << "v8 value:\t\t" << v8 << std::endl;
    std::cout << std::string(50, '=') << std::endl << std::endl;





    return 0;
}