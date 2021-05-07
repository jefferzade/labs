#pragma once
#include "monom.h"
using namespace std;

class cyclicList
{
	monom* head;
public:
	cyclicList()
	{
		head = new monom;
	}
	~cyclicList()
	{
		monom* P = head->GetNext();
		head->SetNext(nullptr);
		delete P;
	}
	cyclicList(const cyclicList& tmp)
	{
		head = new monom;
		monom* curr;
		curr = tmp.head->GetNext();
		while (curr != tmp.head)
		{
			this->add(curr->GetKoef(), curr->GetSv());
			curr = curr->GetNext();
		}
	}
	cyclicList &operator=(cyclicList tmp)
	{
		monom* curr = head->GetNext();
		head->SetNext(nullptr);
		delete curr;
		head = new monom();
		curr = tmp.head->GetNext();
		while (curr != tmp.head)
		{
			this->add(curr->GetKoef(), curr->GetSv());
			curr = curr->GetNext();
		}
		return *this;
	}
	void add(int koef, int Sv)
	{
	 monom* prev = head;
	 monom* curr = head->GetNext();
	 while (curr->GetSv() > Sv)
	 {
		 prev = curr;
		 curr = curr->GetNext();
	 }
	 if (curr->GetSv() == Sv)
	 {
		 if (koef + curr->GetKoef() == 0)
		 {
			 prev->SetNext(curr->GetNext());
			 curr->SetNext(nullptr);
		 }
		 else
		 {
			 curr->SetKoef(koef + curr->GetKoef());
		 }
	 }
	 else
	 {
		 monom* P = new monom(koef, Sv);
		 P->SetNext(curr);
		 prev->SetNext(P);
	 }


	}
	cyclicList operator+(cyclicList tmp)
	{
		cyclicList result(tmp);
		monom* curr = head->GetNext();
		while (curr!= head)
		{
			result.add(curr->GetKoef(), curr->GetSv());
			curr = curr->GetNext();                                   
		}
		return result;
	}
	cyclicList operator-(cyclicList tmp)
	{
		cyclicList result(*this);
		result = result + (tmp * (-1));
		return result;
	}
	cyclicList operator*(int k)
	{
		if (k != 0)
		{
			cyclicList result(*this);
			monom* curr = result.head->GetNext();
			while (curr != result.head)
			{
				curr->SetKoef(curr->GetKoef() * k);
				curr = curr->GetNext();
			}
			return result;
		}
		else
		{
			return cyclicList();
		}
	}
	cyclicList mult(cyclicList tmp, int maxSt, int N)
	{
		cyclicList result;
		monom* curr = head->GetNext();
		monom* curr_tmp;
		monom P;
		while (curr != head)
		{
			curr_tmp = tmp.head->GetNext();
			while (curr_tmp != tmp.head)
			{
				P = curr->mult(*curr_tmp, maxSt, N);
				if (P.GetSv() != -1)
				{
					result.add(P.GetKoef(), P.GetSv());
				}
				curr_tmp = curr_tmp->GetNext();
			}
			curr = curr->GetNext();
		}
		return result;
	}
	string getPolynom(int maxSt, int N)
	{
		string str = "";
		monom* curr = head->GetNext();
		while (curr != head)
		{
			str = str + curr->getMonom(N, maxSt);
			curr = curr->GetNext();
		}
		return str;
	}

};

