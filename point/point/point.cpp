#include <iostream>
using namespace std;

class MyClass
{
private:
    int Size;
    
public:
    int* data;
    MyClass(int size)
    {
        cout << "Constructor is on " << this << endl;
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
            cout << data[i] << endl;
        }
        

    };
    MyClass(const MyClass &other)
    {
        this->Size = other.Size;
        this->data = new int [other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        cout << "Constructor of copying is on " << endl;
    }
    MyClass& operator= (const MyClass& other)
    {      
        cout << "Operator = is on" << this << endl;
        this->Size = other.Size;
        if (this->data!= nullptr)
        {
            delete[] this->data;
        }
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            this->data[i] = other.data[i];
        }
        return *this;
    }
    ~MyClass()
    {
        
        cout << "Destructor is on  " << this << endl;
    }
};

void foo(MyClass value)
{
    cout << "Function Foo is on" << endl;
}

MyClass foo2()
{
    cout << "Function foo2 is on " << endl;
    MyClass temp(2);

    return temp;
}


class Point 
{
private:
    int x;
    int y;
public:
   Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        cout << this << " constructor\n" << endl;

    }

    Point()
    {
        x = 0;
        y = 0;
        cout << this << " constructor\n" << endl;
    }

    Point(int valueX, bool boolean)
    {
        x = valueX;
        if (boolean)
        {
            y = 1;
        }
        else
        {
            y = -1;
        }
    }

    int GetY()
    {
        return y;
    } 
    void SetY(int y)
    {
        this->y = y;
    }
    int GetX() 
    {
        return x;
    }
    void SetX(int x)
    {
        this->x  = x;
    }
    void Print()
    {
        cout << "X= " << x << "\tY= " << y << endl;
    }
};
int main()
{
    MyClass a(8);
    MyClass b(3);
    a = b;
        return 0;
}




