#include <iostream>
using namespace std;

class Vector;
class Matrix
{
    int m[3][3];

public:
    void getMatrix();
    void showMatrix();
    friend void multiply(Matrix &, Vector &);
};
class Vector
{
    int v[3];

public:
    void getVector();
    void showVector();
    friend void multiply(Matrix &, Vector &);
};
void Matrix ::getMatrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
        }
        cout << endl;
    }
}
void Matrix ::showMatrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void Vector ::getVector()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
}
void Vector ::showVector()
{
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }
}
void multiply(Matrix &m1, Vector &v1)
{
    int result[3];
    for (int i = 0; i < 3; i++)
    {
        result[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            result[i] += (m1.m[i][j] * v1.v[j]);
        }
        cout << result[i] << "\t";
    }
}
int main()
{
    Matrix m1;
    Vector v1;
    m1.getMatrix();
    m1.showMatrix();
    v1.getVector();
    v1.showVector();

    multiply(m1, v1);

    return 0;
}