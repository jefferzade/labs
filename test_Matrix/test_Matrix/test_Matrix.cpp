#include "TMatrix.h"
#include <iostream>
using namespace std;
int main()
{
    int size=4;
    TMatrix a(size);
    cout << "Vvedi matricu" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = i;j < size;j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout <<" "<< a[i][j];
        }
        cout << endl;
    }
    TMatrix b;
    b = a;
    cout << "Matrica b" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << b[i][j];
        }
        cout << endl;
    }
    TMatrix c(a);
    cout << "Matrica c" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    c = a + b;
    cout << "Matrica c" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    c = a - b;
    cout << "Matrica c" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    c = a * 3;
    cout << "Matrica c" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    c = a * b;
    cout << "Matrica c" << endl;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
}

