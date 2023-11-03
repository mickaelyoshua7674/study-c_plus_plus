#include <iostream>

template <typename T, typename U>
void func(T t, U u) {
    std::cout<<"The first parameter is: "<<t<<"\n";
    std::cout<<"The second parameter is: "<<u<<"\n";
}

template <typename T>
class MyClass {
    private:
        T t;
    public:
        MyClass(T value) {
            t = value;
        }
    void print_value() {
        std::cout<<t<<"\n";
    }

};

// Template Specialization
template <typename T>
void func2(T arg) {
    std::cout<<"The value is: "<<arg<<"\n";
}
template <>
// template specialization code
void func2(int arg) {
    std::cout<<"Specialitation for 'int' add + 1, value is: "<<++arg<<"\n";
}

int main() {
    func<std::string, double>("opa",42.42); // instantiate function template with <{type}>
    func<int,char>(2,'M');

    std::cout<<"\n";
    MyClass<int> obj(2);
    obj.print_value();
    MyClass<std::string> obj2("Inhai");
    obj2.print_value();

    // Template Specialization
    std::cout<<"\n";
    func2<std::string>("Opa");
    func2<int>(3);
    func2<char>('a');
}