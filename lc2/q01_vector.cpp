#include <iostream>
#include <cmath>
class vector
{
private:
    float icomp, jcomp, kcomp, magnitude;
    std::string checksign(float comp)
    {
        return comp < 0 ? " " : "+";
    }

public:
    vector() : icomp(0), jcomp(0), kcomp(0) {}
    vector(int i, int j, int k) : icomp(i), jcomp(j), kcomp(k) {}
    void display()
    {
        std::cout << icomp << "i" << checksign(jcomp) << jcomp << "j" << checksign(kcomp) << kcomp << "k";
    }
    float findmag()
    {
        magnitude = sqrt(pow(icomp, 2) + pow(jcomp, 2) + pow(kcomp, 2));
        return magnitude;
    }
    bool operator==(vector U)
    {
        return findmag() == U.findmag();
    }
    bool operator!=(vector U)
    {
        return findmag() != U.findmag();
    }
    bool operator<(vector U)
    {
        return findmag() < U.findmag();
    }
    bool operator<=(vector U)
    {
        return findmag() <= U.findmag();
    }
    bool operator>(vector U)
    {
        return findmag() > U.findmag();
    }
    bool operator>=(vector U)
    {
        return findmag() >= U.findmag();
    }
};
int main()
{
    int a1, a2, a3;
    vector v1, v2;
    int choice = 0;
    do
    {
        std::cout << "\n1. Input vector" << std::endl;
        std::cout << "2. Vector_1 == vector_2" << std::endl;
        std::cout << "3. Vector_1 != vector_2" << std::endl;
        std::cout << "4. Vector_1 > vector_2" << std::endl;
        std::cout << "5. Vector_1 >= vector_2" << std::endl;
        std::cout << "6. Vector_1 < vector_2" << std::endl;
        std::cout << "7. Vector_1 <= vector_2" << std::endl;
        std::cout << "8. Show vectors" << std::endl;
        std::cout << "9. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "Enter the components of first vector: ";
            std::cin >> a1 >> a2 >> a3;
            v1 = vector(a1, a2, a3);
            std::cout << "Enter the components of second vector: ";
            std::cin >> a1 >> a2 >> a3;
            v2 = vector(a1, a2, a3);
            break;
        case 2:
            if (v1 == v2)
                std::cout << "Given vectors are equal" << std::endl;
            else
                std::cout << "Given vectors are not equal" << std::endl;
            break;
        case 3:
            if (v1 != v2)
                std::cout << "Given vectors are not equal" << std::endl;
            else

                std::cout << "Given vectors are equal" << std::endl;
            break;
        case 4:
            if (v1 > v2)
                std::cout << "Vector 1 is greater than vector 2.\n";
            else
                std::cout << "Vector 1 is not greater than vector 2.\n";
            break;
        case 5:
            if (v1 >= v2)
                std::cout << "Vector 1 is greater than or equal to vector 2.\n";
            else
                std::cout << "Vector 1 is not greater than or equal to vector 2.\n";
            break;
        case 6:
            if (v1 < v2)
                std::cout << "Vector 1 is less than vector 2.\n";
            else
                std::cout << "Vector 1 is not less than vector 2.\n";
            break;
        case 7:
            if (v1 <= v2)
                std::cout << "Vector 1 is less than or equal to vector 2.\n";
            else
                std::cout << "Vector 1 is not less than or equal to vector 2.\n";
            break;
        case 8:
            std::cout << "Vector 1: ";
            v1.display();
            std::cout << "Vector 2: ";
            v2.display();
            break;
        case 9:
            std::cout << "Thank you for using the program.\n";
            break;
        default:
            std::cout << "Error: enter a valid choice.\n";
        }
    } while (choice != 9);
    return 0;
}