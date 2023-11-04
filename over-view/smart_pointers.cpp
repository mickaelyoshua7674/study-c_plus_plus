#include <iostream>
#include <memory>

int main() {
    // unique smart point
    std::unique_ptr<int> p(new int);
    // no explicit use of 'delete' operator is required
    *p = 123;
    std::cout<<*p<<"\n\n";
    // another way with function 'make_unique'
    std::unique_ptr<int> po = std::make_unique<int>(42);
    std::cout<<*po<<"\n\n";

    // shared smart pointer
    std::shared_ptr<int> p1 = std::make_shared<int>(4);
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
    std::cout<<"Pointer 1: "<<*p1<<"\n";
    std::cout<<"Pointer 2: "<<*p2<<"\n";
    std::cout<<"Pointer 3: "<<*p3<<"\n";
    // when all pointers get out of scope, the pointed-to object gets destroyed
}