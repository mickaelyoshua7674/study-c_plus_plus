#include <iostream>
#include <string>

int main() {
    std::string s = "Hello World!";
    std::cout<<s;

    std::cout<<"\n"<<s.c_str(); //return a pointer to first string's character / type const char*

    std::cout<<"\n"<<s.substr(6,5); //.substr(starting_position, length)

    std::string text = "This is a Hello World string.";
    std::string text_to_find = "Hello";
    std::string::size_type position_found = text.find(text_to_find); // if not found return a npos value
    if (position_found != std::string::npos) {
        std::cout<<"\n"<<position_found;
    }
    else {
        std::cout<<"\n"<<"Not Found";
    }
    
}