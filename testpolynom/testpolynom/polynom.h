#pragma once
#include <iostream>
#include "cyclicList.h"
#include "monom.h"
#include <string>
#include <string.h>
using namespace std;


class polynom
{
private:
	int N;
	int MaxSt;
	cyclicList list;
	void sttoword(string st, string* w, int& k)
	{
		std::string zn = "+-";
		st = st + " ";
		k = 0;
		w[0] = "";
		for (int i = 0; i < st.length(); i++)
		{
			int l = zn.find(st[i]);
			if ((0 > l) || (l >= zn.length()))
			{
				w[k] = w[k] + st[i];
			}
			else
			{
				if (st[i] == ' ')
				{
					if (w[k] != "")
					{
						w[++k] = "";
					}
				}
				else
				{
					if (w[k] != "")
					{
						w[++k] = st[i];
					}
					else
					{
						w[k] = st[i];
					}
					//w[++k] = "";
				}
			}
		}
		k++;
	}
	int strtoSv(string str)
	{
		string vare;
		int l;
		int* Pv = new int[N+1];
		for (int i = 0; i <= N; i++)
		{
			Pv[i] = 0;
		}
		for (int i = N; i > 0; i--)
		{
			vare = "x" + to_string(i);
			l = str.find(vare);
			if (l >= 0)
			{
				str.erase(l, vare.length());
				if (str[l] != '^')
				{
					Pv[i] = 1;
				}
				else
				{
					str.erase(l, 1);
					string V = "";
					while ((l < str.length()) && (str[l] != 'x'))
					{
						V += str[l];
						str.erase(l, 1);
					}
					Pv[i] = stoi(V);
					if (Pv[i] > MaxSt)
					{
						Pv[i] = 0;
					}
				}
			}
		}
		int Sv = 0;
		for (int i=1;i<=N; i++)
		{
			Sv = Sv * MaxSt + Pv[i];
		}
		return Sv;
	}

	int strtoKoef(string str)
	{
		int l = str.find("x");
		if (l >= 0)
		{
			str.erase(l);
		}
		if (str == "" || str == "+")
		{
			return 1;
		}
		else
		{
			if (str == "-")
			{
				return -1;
			}
			else
			{
				return stoi(str);
			}
		}
		
			
	};
	
public:
	polynom(string str = "", int _N = 5, int _MaxSt = 10)
	{
		MaxSt = _MaxSt;
		N = _N;
		string* w = new string[str.length()];
		int k;             
		sttoword(str, w, k);
		for (int i = 0; i < k; i++)
		{
			list.add(strtoKoef(w[i]), strtoSv(w[i]));
		}
	}
	polynom(const polynom& tmp)
	{
		MaxSt = tmp.MaxSt;
		N = tmp.N;
		list = tmp.list;
	}
	polynom& operator=(polynom tmp)
	{
		MaxSt = tmp.MaxSt;
		N = tmp.N;
		list = tmp.list;
		return *this;
	}
	~polynom()
	{

	}
	void AddMonom(string str)
	{
		list.add(strtoKoef(str), strtoSv(str));
	}
	polynom operator+(polynom tmp)
	{
		polynom res(*this);
		res.list = res.list + tmp.list;
		return res;
	}
	polynom operator-(polynom tmp)
	{
		polynom res(*this);
		res.list = res.list - tmp.list;
		return res;
	}
	polynom operator*(polynom tmp)
	{
		polynom res(*this);
		res.list = res.list.mult(tmp.list, MaxSt, N);
		return res;
	}
	polynom operator*(int k)
	{
		polynom res(*this);
		res.list = (res.list) * k;
		return res;
	}
	string GetPolynom()
	{
		return list.getPolynom(MaxSt, N);
	}
};

