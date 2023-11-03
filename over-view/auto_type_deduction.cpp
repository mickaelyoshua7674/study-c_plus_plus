#include <iostream>
#include <typeinfo>

int main() {
    auto z = 'a'; // char
    auto x = 123; // int
    auto y = 123.456 / 789.1; // double
    std::cout<<typeid(z).name()<<std::endl;
    std::cout<<typeid(x).name()<<std::endl;
    std::cout<<typeid(y).name()<<std::endl;
}