#include <iostream>
#include <vector>

class Vector{
    public:
        std::vector<int> v;
        Vector(std::vector<int> vec) {
            v = vec;
        }

        friend Vector operator+(Vector& lhs, const Vector& rhs) {
            int vector_lenght = lhs.v.size();
            std::vector<int> result(vector_lenght,0);
            for (int i=0; i<vector_lenght; i++) result[i] = lhs.v[i] + rhs.v[i];
            return Vector(result);
        }
};

std::ostream& operator<<(std::ostream& out, const Vector& rhs) {
    for (const auto& element: rhs.v) {
        out<<element;
        if (element != rhs.v.back()) out<<",";
    }
    return out;
}

int main() {
    Vector v1(std::vector<int> {1,2,3});
    std::cout<<"Vector 1: "<<v1<<std::endl;
    Vector v2(std::vector<int> {1,2,3});
    std::cout<<"Vector 2: "<<v2<<std::endl;
    std::cout<<"Sum: "<<v1+v2;
}