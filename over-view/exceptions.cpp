#include <iostream>

int AddPositiveInt(int x, int y) {
    if(x<0||y<0) throw std::invalid_argument("Both values must be positive");
    return x+y;
}

int main() {
    try {
        std::cout<<AddPositiveInt(1,2)<<"\n";
        std::cout<<AddPositiveInt(-1,2)<<"\n";
    }
    catch (std::invalid_argument& e) {
        std::cout<<e.what()<<"\n";
    }
}