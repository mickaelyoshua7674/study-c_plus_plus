#include <iostream>

class MyClass {
    public:
        int x;
        void printx() {
            /**/
            std::cout<<"Value of x: "<<x<<std::endl;
        }
};

struct Person {
    std::string name;
    int age;
};
class MyClass2 {
    private:
        Person p;
    public:
        MyClass2(std::string name, int age) {
            p.name = name;
            p.age = age;
            std::cout<<"Initialized with\nname: "<<p.name<<"\nage: "<<p.age<<std::endl;
        }
        // Overwrite default copy constructor
        MyClass2(const MyClass2& rhs) {
            p.name = rhs.p.name;
            p.age = rhs.p.age;
            std::cout<<"Copy initialized with\nname: "<<p.name<<"\nage: "<<p.age<<std::endl;
        }
};

class MyClass3 {
    public:
        Person p {.name="Mickael", .age=24};
        MyClass3& operator=(const MyClass3& rhs) {
            p.name = "Mickael assignment";
            p.age = rhs.p.age;
            std::cout<<"Copy by assignment with\nname: "<<p.name<<"\nage: "<<p.age<<std::endl;
            return *this;
        }
};

int main() {
    MyClass obj;
    obj.x = 123;
    obj.printx();
    std::cout<<std::endl;
    MyClass2 obj2{"Mickael", 24};
    std::cout<<std::endl;
    
    // uses the copy constructor
    MyClass2 obj2_copy = obj2;
    std::cout<<std::endl;
    
    MyClass3 obj3;
    // uses the assignment operator
    MyClass3 obj3_copy_by_assignment;
    obj3_copy_by_assignment = obj3;
    std::cout<<obj3_copy_by_assignment.p.name;
}