#include <iostream>

int main() {
    //const int n; //s cant just initialize an constant
    const int n = 5;
    std::cout<<n<<std::endl;
    // n += 1; // give error: assignment of read-only variable 'n'

    constexpr int n = 123; // OK, is a compile-time constant expression

    int x = 123;
    constexpr int n2 = x; // ERROR, is not a compile-time expression
    /*the constexpr will be evaluated at compile time and the
      int x will be in execution time*/
}