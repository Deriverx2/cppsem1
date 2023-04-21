#include <iostream>
class vector
{
private:
    float icomp, jcomp, kcomp;
    void checksign(float comp)
    {
        if (comp > 0)
            std::cout << "+";
    }

public:
    vector() {}
    vector(int i, int j, int k) : icomp(i), jcomp(j), kcomp(k) {}
    friend std::istream &operator>>(std::istream &in, vector &v)
    {
        std::cout << "Enter the components of vector: ";
        in >> v.icomp >> v.jcomp >> v.kcomp;
        return in;
    }
    friend std::ostream &operator<<(std::ostream &out, vector &v)
    {
        out << v.icomp << "i";
        v.checksign(v.jcomp);
        out << v.jcomp << "j";
        v.checksign(v.kcomp);
        out << v.kcomp << "k";
        return out;
    }
    friend vector operator*(const vector &vect1, const vector &vect2)
    {
        vector temp;
        temp.icomp = vect1.icomp * vect2.icomp;
        temp.jcomp = vect1.jcomp * vect2.jcomp;
        temp.kcomp = vect1.kcomp * vect2.kcomp;
        return temp;
    }
};

int main()
{
    vector v1, v2, v3;
    std::cin >> v1;
    std::cout << "First vector: " << v1 << std::endl;
    std::cin >> v2;
    std::cout << "Second vector: " << v2 << std::endl;
    v3 = v1 * v2;
    std::cout << "Dot product of the two vectors is " << v3 << std::endl;
    return 0;
}