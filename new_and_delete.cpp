#include <iostream>

int main() {
    int* p = new int; // allocate the memory for one integer and store the memory address inside a pointer
    *p = 123; // give a value to the allocated memory
    std::cout<<"The pointed-to value is: "<<*p<<std::endl;
    delete p; // deallocate the memory slot
    {
        // allocate an array of memory
        int* p = new int[3];
        p[0] = 1;
        p[1] = 2;
        p[2] = 3;

        std::cout<<p[2];
        delete[] p;
    }
}