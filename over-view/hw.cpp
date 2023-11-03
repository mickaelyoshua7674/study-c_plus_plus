#include <iostream> // includes the iostream header file content into our source file via the #include directive

int main() {
    // comment
    /*multi-line
    comment*/
    std::cout << "Hello World! :D"; // std::cout object, also known as the standard output stream.
                                    // The << operator, called the stream insertion operator
    std::cout << "\nFirst " << "Second\n";

    bool b = true;
    std::cout<<b;
    std::cout<<"\n";

    char c = 'a';
    std::cout<<c<<sizeof(c);
    std::cout<<"\n";
    char c_again = 97;
    std::cout<<c_again;

}