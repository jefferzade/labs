#pragma once
#include <string>
using namespace std;
class monom
{
private:
	int koef;
	int Sv;
	monom* next;
public:
	monom(int _koef = 0, int _Sv = -1)
	{
		koef = _koef;
		Sv = _Sv;
		next = this;
	}
	~monom()
	{
		next = nullptr;
	}
	monom(const monom& tmp)
	{
		koef = tmp.koef;
		Sv = tmp.Sv;
		next = this;
	}
	monom& operator=(monom tmp)
	{
		koef = tmp.koef;
		Sv = tmp.Sv;
		next = this;
		return *this;
	}
	int GetKoef()
	{
		return koef;
	}
	int GetSv()
	{
		return Sv;
	}
	monom* GetNext()
	{
		return next;
	}
	void SetKoef(int _koef)
	{
		koef = _koef;
	};
	void SetSv(int _Sv)
	{
		Sv = _Sv;
	};
	void SetNext(monom* _next)
	{
		next = _next;
	};
	string getMonom (int n, int maxSt)
	{
		string res = "";
		int curr = Sv;
		int deg;
		for (int i = n;i > 0;i--)
		{
			deg = curr % maxSt;
			curr = curr / 10;
			if (deg > 0)
			{
				if (deg == 1)
				{
					res = "x" + to_string(i) + res;
				}
				else
				{
					res = "x" + to_string(i) + "^" + to_string(deg) + res;
				}
			}
		}
		res = to_string(koef) + res;
		if (res[0] != '-')
		{
			res = "+" + res;
		}
		return res;
	};
	monom mult(monom tmp, int maxSt, int n)
	{
		monom result;
		int* pv1 = new int[n];   //массив со степенями первого полинома
		int* pv2 = new int[n];
		int* pv_res = new int[n];
		int tmp_Sv = tmp.GetSv();
		int this_Sv = this->GetSv();
		for (int i = n - 1;i >= 0;i--)
		{
			pv1[i] = this_Sv % maxSt;
			pv2[i] = tmp_Sv % maxSt;
			this_Sv = this_Sv / maxSt;
			tmp_Sv = tmp_Sv / maxSt;
			pv_res[i] = pv1[i] + pv2[i];
			if (pv_res[i] >= maxSt)
			{
				result.SetKoef(1); //признак того, что было превышение степени
			}
		}
		if (result.GetKoef() == 0)
		{
			result.SetKoef(tmp.GetKoef() * this->GetKoef());
			int sum = 0;
			for (int i = 0;i < n - 1;i++)
			{
				sum = (sum + pv_res[i]) *maxSt;
			}
			sum += pv_res[n - 1];
			result.SetSv(sum);
		}
		delete[] pv1;
		delete[] pv2;
		delete[] pv_res;
		return result;
	}

};

