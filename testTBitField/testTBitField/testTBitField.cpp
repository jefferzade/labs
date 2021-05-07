#include <iostream>
#include "TSet.h"
#include "TBitField.h"

int main()
{
	TBitField a(100);
	TBitField b;
	a.addnum(32);
	cout << a.subset(100) << endl;
	a.addnum(64);
	//cout << a.getset() << endl;
	cout << a.subset(100) << endl;
	a.addnum(8);
	cout << a.subset(100) << endl;
	a.addnum(99);
	cout << a.subset(100) << endl;
	b = a;
	//cout << a.getset() << endl;
	cout << a.subset(100) << endl;
	//cout << b.getset() << endl;
	cout << b.subset(100) << endl;
	b.addnum(32);
	b.addnum(21);
	b.addnum(77);
	//cout << b.getset() << endl;
	cout << b.subset(100) << endl;
} 


