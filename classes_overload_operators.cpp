#include <iostream>
#include <vector>

class Vector{
    public:
        std::vector<int> v;
        Vector(std::vector<int> v) {
            v = v;
            std::cout<<v[0];
        }

        friend Vector operator+(Vector lhs, const Vector& rhs) {
            int vector_lenght = lhs.v.size();
            std::vector<int> result;
            for (int i=0; i<vector_lenght; i++) result.push_back(0);
            for (int i=0; i<vector_lenght; i++) result[i] = lhs.v[i] + rhs.v[i];
            return Vector(result);
        }
};

std::ostream& operator<<(std::ostream& out, const Vector& rhs) {
    for (const auto& element: rhs.v) {
        std::cout<<element;
        out << element << " ";
    }
    return out;
}

int main() {
    Vector v1{{1,2,3}};
    std::cout<<v1<<std::endl;
    Vector v2{{3,2,1}};
    std::cout<<v2<<std::endl;
    Vector sum = v1+v2;
    std::cout<<sum;
}