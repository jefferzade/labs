#pragma once
#include "string"
#include "stdlib.h"
using namespace std;
class intSet
{
    int* mem;
    int size;
    int count;
    int universe_size;
public:
    intSet(int _universe_size = 100, int _size = 0)
    {
        size = _size;
        mem = new int[size];
        for (int i = 0; i < size; i++)
        {
            mem[i] = 0;
        }
        count = 0;
        universe_size = _universe_size;
    }
    ~intSet()
    {
        delete[] mem;
    }
    intSet(const intSet& tmp)
    {
        size = tmp.size;
        mem = new int[size];
        for (int i = 0; i < size; i++)
        {
            mem[i] = tmp.mem[i];
        }
        count = tmp.count;
        universe_size = tmp.universe_size;

    }
    intSet& operator= (const intSet& tmp)
    {
        if (size!=tmp.size)
        {
            if (size != 0)
            {
                delete[] mem;
            }
        }    
            size = tmp.size;
            mem = new int[size];
        
        count = tmp.count;
        for (int i = 0; i < size; i++)
        {
            mem[i] = tmp.mem[i];
        }
        universe_size = tmp.universe_size;



        return *this;
    }
    void add(int number)
    {
        if ((number > 0) && (number <= universe_size))
        {
            int l = -1;
            int i = 0;
            while ((l == -1) && (i < count))
            {
                if (number == mem[i])
                {
                    l = i;
                }
                i++;
            }
            if (l == -1)
            {
                mem[count++] = number;
            }
        }
    }
    string vivod()
    {
        string str = "";
        for (int i = 0; i < count; i++)
        {
            str = str + " " + to_string(mem[i]);
        }
        return str;
    }
};
