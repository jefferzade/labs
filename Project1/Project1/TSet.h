#pragma once
#include "TBitField.h"
#include <string.h>
using namespace std;
class TSet
{
private:
	TBitField set;
	int sizeU;
public:
	TSet(int _sizeU = 1, string str = ""):sizeU(_sizeU) {
		int k;
		set = TBitField(sizeU);
		string* w;
		w = new string[sizeU];
		string_to_word(str, w, k);
		for (int i = 0;i < k;i++) {
			int number = stoi(w[i]);
			set.addnum(number);
			string str = set.subset(sizeU);
		}
	};
	TSet(const TSet& tmp)
	{
		set = tmp.set;
		sizeU = tmp.sizeU;
	};
	~TSet() {};
	TSet& operator=(const TSet& tmp)
	{
		set = tmp.set;
		sizeU = tmp.sizeU;
		return *this;
	};
	void addnum(int k) {
		if ((k > 0) && (k <= sizeU)) {
			set.addnum(k);
		}
	};
	void delnum(int k) {
		if ((k > 0) && (k <= sizeU)) {
			set.delnum(k);
		}
	};
	string getset() {
		string str = set.subset(sizeU);
		return str;
	};
	TSet operator|(const TSet& tmp)
	{
		TSet result(sizeU);
		result.set = set | tmp.set;
		return result;
	};
	TSet operator&(TSet& tmp)
	{
		TSet result(sizeU);
		result.set = set & tmp.set;
		return result;
	};
	TSet operator~()
	{
		TSet result(sizeU);
		result.set = ~set;
		return result;
	};
private:

	void string_to_word(string st, string* w, int& k)
	{
		string zn = ",.!? ";
		st = st + ' ';
		k = 0;
		w[0] = "";
		for (int i = 0; i < st.length(); i++)
		{
			int l = zn.find(st[i]);
			if ((0 > l) || (l >= zn.length()))
			{
				w[k] += st[i];
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
					w[++k] = "";
				}
			}
		}

	}
};