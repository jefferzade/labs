#include <iostream>
#include "intSet.h"

int main()
{
    intSet a(18);
    intSet b;
    a.add(25);
    a.add(-10);
    a.add(17);
    a.add(4);
    a.add(7);
    cout << a.vivod() << endl;
    cout << b.vivod() << endl;

    b = a;
    cout << b.vivod() << endl;
}

