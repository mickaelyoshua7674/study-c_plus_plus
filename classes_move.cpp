#include <iostream>

struct Animal {
    std::string name;
    std::string origin;
};
class MyClass {
    public:
        Animal a;
        MyClass(std::string name="Capibara", std::string origin="Brazil") {
            a.name = name;
            a.origin = origin;
        }
};
class MyClass2 {
    public:
        Animal a;
        MyClass2(std::string name="Capibara", std::string origin="Brazil") {
            a.name = name;
            a.origin = origin;
        }

        // my move constructor
        MyClass2(MyClass2&& rhs) {
            a.name = std::move(rhs.a.name);
            a.origin = std::move(rhs.a.origin);
            a.origin +=  " Moved!";
            std::cout<<"My move constructor.\n";
        }
};

int main() {
    MyClass obj;
    std::cout<<"Init: "<<obj.a.name<<std::endl;
    MyClass obj_moved = std::move(obj);
    std::cout<<"After move: "<<obj.a.name<<std::endl;
    std::cout<<"Were it went: "<<obj_moved.a.name<<std::endl;
    std::cout<<"Move constructor invoked.";
    std::cout<<std::endl<<std::endl;

    MyClass2 obj2{"Zebra", "Africa?"};
    std::cout<<"Init: "<<obj2.a.origin<<std::endl;
    MyClass2 obj2_moved = std::move(obj2);
    std::cout<<"After move: "<<obj2.a.origin<<std::endl;
    std::cout<<"Were it went: "<<obj2_moved.a.origin<<std::endl;
}