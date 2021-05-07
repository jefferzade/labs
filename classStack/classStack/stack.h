#pragma once
template <class T>
class stack
{
private:
	T* mem;
	int size;
	int count;
public:
	stack(int _size = 10) 
	{
		size = _size;
		count = 0;
		mem = new int[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = T(0);
		}
	}
	~stack() 
	{
		delete[]mem;
	};
	stack(const stack &tmp)
	{
		size = tmp.size;
		count = tmp.count;
		mem = new int[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}
	stack& operator=(const stack& tmp)
	{
		delete[]mem;
		size = tmp.size;
		count = tmp.count;
		mem = new int[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	void push(T obj)
	{
		mem[count++] = obj;
	}
	T pop()
	{
		return mem[--count];
	}
	T top()
	{
		return mem[count-1];
	}
	int isempty()
	{
		if (count == 0)
		{
			return 0; //stack is empty
		}
		else
		{
			return 1; //stack is not empty
		}
	}
	int isfull()
	{
		if (count == size)
		{
			return 0; //stack is full
		}
		else
		{
			return 1; //stack is not full
		}
	}
};

