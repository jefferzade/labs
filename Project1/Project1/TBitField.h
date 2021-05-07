#pragma once
#include <string>
using namespace std;
class TBitField
{
	unsigned* mem;
	int size;
	int getnummem(int numun)
	{
		return(numun - 1) / (sizeof(unsigned) * 8);
	}
	int getnumbit(int numun)
	{
		int l = (numun - 1) % (sizeof(unsigned) * 8);
		return(numun - 1) % (sizeof(unsigned) * 8);
	}
	int getmask(int numun)
	{
		return 1 << getnumbit(numun);
	}
public:
	TBitField(int sizeU = 0)
	{
		size = sizeU / (sizeof(unsigned) * 8) + 1;
		mem = new unsigned int[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = 0;
		}
	}

	~TBitField()
	{
		delete[]mem;
	}
	TBitField(const TBitField& tmp)
	{
		size = tmp.size;
		mem = new unsigned int[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}
	TBitField& operator=(const TBitField& tmp)
	{
		if (size != tmp.size)
		{
			if (size != 0)
			{
				delete[]mem;
			}
			size = tmp.size;
			mem = new unsigned[size];
		}
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	void addnum(int num)
	{
		if (num > 0)
		{
			int k = getnumbit(num);
			int l = getnummem(num);
			mem[getnummem(num)] = mem[getnummem(num)] | (1 << k);
		}
	}
	void delnum(int num)
	{
		if (num > 0)
		{
			int k = getnumbit(num);
			int l = getnummem(num);
			mem[getnummem(num)] = mem[getnummem(num)] & (~(1 << k));
		}
	}
	string subset(int sizeU)
	{

		int k;
		string str = "";

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < sizeof(unsigned) * 8; j++)
			{
				k = i * sizeof(unsigned) * 8 + j + 1;

				if (k <= sizeU)
				{
					if ((mem[i] & (1 << j)) > 0)
					{
						//cout << "k=" << k << endl;
						str = str + to_string(k) + " ";
					}
				}
			}
		}

		return str;
	}
	TBitField operator|(const TBitField tmp)
	{
		TBitField res(*this);
		for (int i = 0; i < size; i++)
		{
			//res.mem[i] = tmp.mem[i];
			res.mem[i] = res.mem[i] | tmp.mem[i];
		}
		return res;
	}
	TBitField operator&(const TBitField tmp)
	{
		TBitField res(*this);
		for (int i = 0; i < size; i++)
		{
			//res.mem[i] = tmp.mem[i];
			res.mem[i] = res.mem[i] & tmp.mem[i];
		}
		return res;

	}
	TBitField operator~()
	{
		TBitField res(*this);
		for (int i = 0; i < size; i++)
		{
			res.mem[i] = ~res.mem[i];
		}
		return res;
	}
};



