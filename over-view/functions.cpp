#include <iostream>

void print_hw() {
    std::cout<<"Hello World."<<std::endl;
}

std::string even_odd(int x) {
    if (x%2 == 0) return "Even";
    return "Odd";
}

int square(int x) {
    x = x*x;
    return x;
}

int square_reference(int& x) { // receive the variable's refference (address)
    x = x*x;
    return x;
}

void print_const_reference(const std::string& contsref) {
    std::cout<<"The constant reference value: "<<contsref<<std::endl;
    /*Const reference is used for efficiency reasons, and the const modifier
    ensures the value of an argument will not be changed.*/
}

// FUNCTION OVERLOADING
void myprint(char param) {
    std::cout<<"Print a char "<<param<<std::endl;
}
void myprint(int param) {
    std::cout<<"Print an int "<<param<<std::endl;
}
void myprint(double param) {
    std::cout<<"Print a double "<<param<<std::endl;
}

int main() {
    print_hw();
    std::cout<<even_odd(6)<<std::endl;
    std::cout<<even_odd(7)<<std::endl;

    int x = 6;
    std::cout<<square(x)<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<square_reference(x)<<std::endl;
    std::cout<<x<<std::endl;

    print_const_reference("Opa");

    myprint('A');
    myprint(42);
    myprint(42.42);
}