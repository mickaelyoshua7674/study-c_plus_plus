#include <iostream>

void f() {
    static int x = 0; // defined only the first time, skipped every other time
    x++;
    std::cout<<"Function ran: "<<x<<" time(s)."<<"\n";
}

class MyClass {
    public:
        static int x; // declare a static data member
        static void func(); // declare a static member function
};

int MyClass::x = 123; // define static data member outside the class scope
void MyClass::func() {
    std::cout<<"Hello from static member function.";
}

int main() {
    f();
    f();
    f();
    std::cout<<"\n\n";
    std::cout<<MyClass::x<<"\n"; // access static data member

    MyClass::x = 456; // change static data member
    std::cout<<MyClass::x<<"\n";
    MyClass::func();
}