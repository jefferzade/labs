
#include <iostream>

using namespace std;

class intSet
{
    int* mem;
    int size;
    int count;
    //приватные свойства и методы класса
public:
    intSet(int _size = 0)
    {
        size = _size;
        mem = new int[size];
        for (int i = 0; i < size; i++)
        {
            mem[i] = 0;
        }
        count = 0;
    }
    ~intSet()
    {
        delete[] mem;
    }
    intSet(const intSet &tmp)
    {
        size = tmp.size;
        mem = new int[size];
        for (int i = 0; i < size; i++)
        {
            mem[i] = tmp.mem[i];
        }
        count = tmp.count;
    }
    intSet& operator= (const intSet& tmp)
    {
        if (size != tmp.size)
        {
            if (size != 0)
            {
                delete[] mem;
            }
            size = tmp.size;
            mem = new int[size];
        }
        count = tmp.count;
        for (int i = 0; i < size; i++)
        {
            mem[i] = tmp.mem[i];
        }

        return *this;

    }


    //открытые свойства и методы класса
    /*intSet operator+ (const intSet& Other);
    intSet operator- (const intSet& Other);
    intSet& operator= (const intSet& Other);

    }*/
};

int main()
{
    intSet a(10);
    intSet b;
    b = a;
    return 0;
}