#include <iostream>
#include <fstream>

int main() {
    {
        std::fstream fw{"file.txt", std::ios::out};
        fw<<"First line\n";
        fw<<"Second line\n";
        fw<<"Third line\n";
    }
    {
        std::cout<<"Line by Line: \n";
        std::fstream fr{"file.txt"};
        std::string s;
        while(fr) {
            std::getline(fr,s); // read line into string variable
            std::cout<<s<<"\n";
        }
    }
    {
        std::cout<<"Character by Character: \n";
        std::fstream fr{"file.txt"};
        char c;
        while(fr >> std::noskipws >> c) { // 'std::noskipws' to don't skip white spaces and new-line
            std::cout<<c;
        }
    }
}