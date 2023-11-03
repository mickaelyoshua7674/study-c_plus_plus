#include <iostream>

int main() {
    int x = 123;
    int& y = x; //reference to x variable / alias to an existing object in memory

    std::cout<<"Value x: "<<x<<"\nValue of reference y to x "<<y;
    std::cout<<"\nAddress x: "<<&x<<"\nAddress of reference y to x "<<&y;
    // same value and address but different names on code

    x = 456;
    std::cout<<"\n\nNew value x: "<<x<<"\nNew value of reference y to x "<<y;
    std::cout<<"\nAddress x: "<<&x<<"\nAddress of reference y to x "<<&y;

    y = 789;
    std::cout<<"\n\nNew value x: "<<x<<"\nNew value of reference y to x "<<y;
    std::cout<<"\nAddress x: "<<&x<<"\nAddress of reference y to x "<<&y;
}