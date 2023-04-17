#include<iostream>

class Matrices {
private:
int m, n;
int **matrix;
public:
Matrices(): m(0), n(0) {}
Matrices(int d1, int d2): m(d1), n(d2) {
matrix = new int*[m];
for(int i=0; i<m; i++) {
matrix[i] = new int[n];
}
}
void getmatrix(int d1, int d2, int value) {
matrix[d1][d2] = value;
}
void display() {
for(int i=0; i<m; i++) {
for(int j=0; j<n; j++) {
std::cout << matrix[i][j] << "\t";
}
std::cout << "\n";
}
}
void operator +(const Matrices& matr) {
if(m == matr.m && n == matr.n) {
Matrices sum(m, n);
for(int i=0; i<m; i++) {
for(int j=0; j<n; j++) {
sum.matrix[i][j] = matrix[i][j] + matr.matrix[i][j];
}
}
sum.display();
} else {
std::cout << "Given matrices cannot be added\n";
}
}
void operator *(const Matrices& matr) {
if(n == matr.m) {
Matrices product(m, matr.n);
for(int i=0; i<m; i++) {
for(int j=0; j<matr.n; j++) {
int value = 0;

for(int k=0; k<n; k++) {
value += matrix[i][k] * matr.matrix[k][j];
}
product.matrix[i][j] = value;
}
}
product.display();
} else {
std::cout << "Given matrices cannot be multiplied\n";
}
}
~Matrices() {
for(int i=0; i<m; i++) {
delete[] matrix[i];
}
delete[] matrix;
}
};
int main() {
int row, column, comp;
std::cout << "Enter row and column of matrix: ";
std::cin >> row >> column;
Matrices A1(row, column);
std::cout << "Enter values of matrix: \n";
for(int i=0; i<row; i++) {
for(int j=0; j<column; j++) {
std::cin >> comp;
A1.getmatrix(i, j, comp);
}
}
A1.display();
std::cout << "Enter row and column of matrix: ";
std::cin >> row >> column;
Matrices A2(row, column);
std::cout << "Enter values of matrix: \n";
for(int i=0; i<row; i++) {
for(int j=0; j<column; j++) {
std::cin >> comp;
A2.getmatrix(i, j, comp);
}
}
A2.display();
std::cout << "\nSum of matrices:\n";
A1 + A2;
std::cout << "\nProduct of matrices:\n";
A1 * A2;

return 0;
}