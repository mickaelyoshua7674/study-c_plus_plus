#include <iostream>

class MyClass {
    public:
        int *p = new int;
        MyClass(int value) {
            std::cout<<"Allocating memory and giving value...\n";
            *p = value;
            std::cout<<"Address: "<<p<<"\nValue: "<<*p<<"\n\n";
        }
        ~MyClass() {
            std::cout<<"Deallocating memory...\n";
            delete p;
            std::cout<<"Destruction completed.";
        }
};

int main() {
    MyClass obj(42);
}