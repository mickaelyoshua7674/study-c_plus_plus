#include <iostream>

class Person {
    protected:
        double height;
        double weight;
    public:
        std::string gender;
        int age;
        Person(double h, double w, std::string g, int a) {
            height = h;
            weight = w;
            gender = g;
            age = a;
        }

        virtual double get_imc() {
            return weight / (height*height);
        }
        // virtual function can be overridden/redefined in derived classes

        virtual void print_name_age() = 0;
        // With the '= 0;' at the end, this virtual function must be redefined
        // in child classes.

        // Classes having at least one pure virtual function are called
        // abstract classes and cannot be instantiated.
};

class Mickael : public Person {
    public:
        std::string name;
        Mickael(std::string n, double h, double w, std::string g, int a) {
            name = n;
            
        }

        void print_name_age() {
            std::cout<<name<<"\n"<<age<<"\n";
        }
};

int main() {
    Mickael obj() 
}
