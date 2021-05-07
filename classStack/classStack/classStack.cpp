#include <iostream>
#include "stack.h"
#include "control.cpp"
#include <string>

using namespace std;

int Control(string str, string& res)
{
	res = "";
	int left = 0;
	int right = 0;
	stack <int> st(str.length());
	for (int i = 0;i < str.length();i++)
	{
		if (str[i] == '(')
		{
			left++;
			st.push(i);
		}
		else
		{
			if (str[i] == ')')
			{
				right++;
				if (st.isempty() == 1)
				{
					st.pop();
				}
				else
				{
					res = str.substr(i, str.length() - i);
					for (int j = i + 1;j < str.length();j++)
					{
						if (str[j] == '(')
						{
							left++;
						}
						if (str[j] == ')')
						{
							right++;
						}
					}
					break;
				}
			}
		}
	}
	return left - right;
}
int main()
{
   /* int x;
    stack <int> A;
    stack <int> B(5);
    cout << "Vvedi znacheniye v stek" << endl;
    while (B.isfull() == 1)
    {
        cin >> x;
        B.push(x);
    }
    A = B;
    while (A.isempty() == 1)
    {
        cout << A.pop() << " ";       
    }
    cout << endl;
    stack <int> C(B);
    while (C.isempty() == 1)
    {
        cout << C.pop() << " ";
    }
    cout << "Verxushka steka B " << B.top() << endl; */

    string A;
    string result;
    int k=0;
	while (k == 0)
	{
      cout << "Vvedi arifmeticheskoye virajeniye" << endl;
	  cin >> A;
	  k = Control(A, result);
	  cout << "Levix skobok bolwe pravix na " << k << endl;
	  cout << "Owibka " << endl;
	  cout << result << endl;
	  cout << "Zakonchili-0, inache-1" << endl;
	  cin >> k;
	}
    
}


