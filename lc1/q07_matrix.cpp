#include <iostream>
class matrix
{
private:
    int **p;
    int d1, d2;
    int trace;
    int row_mult(int, int, matrix, matrix);

public:
    void get_size(int,int);
    void get_value(int,int,int);
    void display();
    void matrix_add(matrix, matrix);
    void matrix_mult(matrix, matrix);
    void matrix_transpose(matrix);
    void matrix_trace();
};

int matrix::row_mult(int m, int n, matrix a, matrix b)
{
    int value = 0;
    for (int i = 0; i < a.d2; i++)
        value += a.p[m][i] * b.p[i][n];
    return value;
}

void matrix::get_size(int m, int n)
{
    d1=m;
    d2=n;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
        p[i] = new int[d2];
}

void matrix::get_value(int i, int j, int value)
{
    p[i][j]=value;
}

void matrix::display()
{
    for (int i = 0; i < d1; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < d2; j++)
        {
            std::cout << p[i][j] << "\t";
        }
    }
}

void matrix::matrix_add(matrix a, matrix b)
{
    if (a.d1 == b.d1 & a.d2 == b.d2)
    {
        std::cout << "\nSum of given matrices";
        d1 = a.d1;
        d2 = a.d2;
        p = new int *[d1];
        for (int i = 0; i < d1; i++)
        {
            p[i] = new int[d2];
            for (int j = 0; j < d2; j++)
                p[i][j] = a.p[i][j] + b.p[i][j];
        }
        display();
    }
    else
        std::cout << "\nGiven matrices cannot be added";
}

void matrix::matrix_mult(matrix a, matrix b)
{
    if (a.d2 == b.d1)
    {
        std::cout << "\nProduct of given matrices";
        d1 = a.d1;
        d2 = b.d2;
        p = new int *[d1];
        for (int i = 0; i < d1; i++)
            p[i] = new int[d2];
        for (int i = 0; i < d1; i++)
        {
            for (int j = 0; j < d2; j++)
            {
                p[i][j] = row_mult(i, j, a, b);
            }
        }
        display();
    }
    else
        std::cout << "\nGiven matrices cannot be multiplied";
}

void matrix::matrix_transpose(matrix a)
{
    d1 = a.d2;
    d2 = a.d1;
    std::cout << "\nTranspose is";
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
        for (int j = 0; j < d2; j++)
            p[i][j] = a.p[j][i];
    }
    display();
}

void matrix::matrix_trace()
{
    if (d1 == d2)
    {
        trace = 0;
        for (int i = 0; (i < d2 && i < d1); i++)
        {
            trace = trace + p[i][i];
        }
        std::cout << "\nTrace of given matrix is " << trace;
    }
    else
    {
        std::cout<<"\nTrace cannot be determined";
    }
}

int main()
{
    matrix test1, test2, test3;
    int m,n,val;
    std::cout << "Enter number of rows and coloumns of 1st matrix" << std::endl;
    std::cin >> m>> n;
    test1.get_size(m,n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "Element(" << i + 1 << "," << j + 1 << ")=";
            std::cin >> val;
            test1.get_value(i,j,val);
        }
    test1.display();
    test3.matrix_transpose(test1);
    test1.matrix_trace();
    std::cout << "\nEnter number of rows and coloumns of 2nd matrix" << std::endl;
    std::cin >> m>> n;
    test2.get_size(m,n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            std::cout << "Element(" << i + 1 << "," << j + 1 << ")=";
            std::cin >> val;
            test2.get_value(i,j,val);
        }
    test2.display();
    test3.matrix_transpose(test2);
    test2.matrix_trace();
    test3.matrix_add(test1, test2);
    test3.matrix_mult(test1, test2);
    return 0;
}