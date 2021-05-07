#include <iostream>

using namespace std;

int main()
{   
    int N;
    double tmp;
    cout << "Enter a positive integer: ";
    cin >> N;
    double* array = new double[N];
    cout << "Array of integers is allocated" << endl;
    cout << "Enter the numbers of array: ";
    for (int i = 0; i < N; i++)
    {
      cin >> array[i];
    }
    for (int i = 0 ; i< (N/2); i++)
    { 
        //swap(array[i], array[N-1-i]);
        tmp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        cout << array[i] <<" ";
        cout << " ";
    }
    delete[] array;
   
}


