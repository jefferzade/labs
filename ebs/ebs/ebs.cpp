#include <iostream>
using namespace std;


 int main()
 {
	int deg;
	double num;
	int res = 1;
	cout << "Enter the number\n" << endl;
	cin >> num;
	cout << "Enter the power of the specified number\n" << endl;
	cin >> deg;
	while (deg!=0) {
		if (deg % 2 == 0) {
			deg /= 2;
			num *= num;
		}
		else {
			deg--;
			res *= num;
		}
	}

	cout << "The result is: " << res << endl;

	return res;
}


