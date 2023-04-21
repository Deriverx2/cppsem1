#include <iostream>
class matrix
{
private:
    int **p;
    int d1, d2;

public:
    matrix(int, int);
    void get_element(int, int, int);
    int put_element(int, int);
    ~matrix();
};

matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
        p[i] = new int[d2];
}

void matrix::get_element(int i, int j, int value)
{
    p[i][j] = value;
}

int matrix::put_element(int i, int j)
{
    return p[i][j];
}

matrix::~matrix()
{
    for (int i = 0; i < d1; i++)
        delete p[i];
    delete p;
    std::cout << "\nMemory has been released";
}

int main()
{
    int m, n, val;
    std::cout << "Enter number of rows and coloumns of matrix" << std::endl;
    std::cin >> m >> n;
    matrix test(m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "Element(" << i + 1 << "," << j + 1 << ")=";
            std::cin >> val;
            test.get_element(i, j, val);
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << test.put_element(i, j) << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}