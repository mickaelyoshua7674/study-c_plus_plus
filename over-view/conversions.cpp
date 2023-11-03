#include <iostream>

int main() {
    // Implicit Conversion
    int i = 18;
    double d = 42.42;
    std::cout<<"initial int: "<<i<<"\nInitial double: "<<d<<"\n\n";
    i = d; // lost the decimal part
    std::cout<<"Final int: "<<i<<"\nInitial double: "<<d<<"\n\n";

    char c1 = 10;
    char c2 = 20;
    std::cout<<"Char 1: "<<c1<<"\nChar 2: "<<c2<<"\nChar 1 + Char 2: "<<c1+c2<<"\n\n";

    int myint = 0;
    if(myint) {
        std::cout<<"True\n";
    } else {
        std::cout<<"False\n";
    }
    std::cout<<"\n";
    int myint2 = 5;
    if(myint2) std::cout<<"True\n"; else std::cout<<"False\n";
    std::cout<<"\n";


    // Explicit Conversion
    auto myinteger = static_cast<int>(42.42);
    std::cout<<myinteger;
}