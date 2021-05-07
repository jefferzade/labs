#include <iostream>
#include "TVector.h"
using namespace std;
int main()
{
	TVector<int> A(10, 5);
	TVector<int> B;
	for (int i = 0; i < 10;i++) {
		cin >> A[i];
	}
	B = A;
	for (int i = 0;i < 10;i++) {
		cout << B[i] << "";
	}
	cout << endl;

	TVector <int> C(A);
	B = A + C;
	for (int i = 0;i < 10;i++) {
		cout << B[i] << " ";
	}
	cout << endl;
	
	B = A - C;
	for (int i = 0;i < 10;i++) {
		cout << B[i] << " ";
	}
	cout << endl;

	int M = A * C;
	cout << M << endl;

	B = A * 3;
	for (int i = 0;i < 10;i++) {
		cout << B[i] << " ";
	}
	cout << endl;
}


