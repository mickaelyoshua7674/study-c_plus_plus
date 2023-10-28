#include <iostream>

int main() {
    int x = 123; 
    int* p = &x; // pointer to address of x variable
    std::cout<<x<<" "<<p;

    /*
    char* empty_pointer = nullptr;
    std::cout<<empty_pointer;
    */

    char c = 'a';
    char* p_char = &c;
    std::cout<<"\nValue of address in pointer: "<<*p_char;

    *p_char = 'b';
    std::cout<<"\nChanged value of char c through the pointer: "<<c;
}