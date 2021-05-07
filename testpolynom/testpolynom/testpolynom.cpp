#include <iostream>
#include "monom.h"
#include <string>
#include "cyclicList.h"
#include "polynom.h"
using namespace std;

int main()
{
    /*monom A(-3, 135);
    monom B;
    cout << B.GetKoef() << "  " << B.GetSv() << endl;
    B = A;
    cout << B.GetKoef() << "  " << B.GetSv() << endl;
    monom C(A);
    cout << C.GetKoef() << "  " << C.GetSv() << endl;
    string str;
    str=C.getMonom(3, 10);
    cout << str << endl;
    monom D(-1, 60357);
    cout << D.getMonom(6, 10) << endl;
    monom E(-1, 160357);
    cout << E.getMonom(6, 10) << endl;
    monom F(-1, 60357);
    cout << F.getMonom(5, 10) << endl;
    monom G(-1,57);
    cout << G.getMonom(6, 10) << endl; */
    monom A(5, 342);
    monom B(-2, 615);
    cout << A.getMonom(3, 10)<<endl;
    cout << B.getMonom(3, 10)<<endl;
    monom C;
    C = A.mult(B, 10, 3);
    cout << C.getMonom(3, 10) << endl;
    cyclicList a;
    a.add(5, 342);
    a.add(-3, 352);
    a.add(1, 232);
    cout << a.getPolynom(10, 3) << endl;
    a.add(1, 0);
    a.add(3, 352);
    a.add(-1, 0);
    a.add(1, 232);
    cout << a.getPolynom(10, 3) << endl;
    polynom P("-3x1^3x2^5x3^2+5x1^3x2^4x3^2+1x1^2x2^3x3^2", 5, 10);
    cout << P.GetPolynom() << endl;
    polynom Q("5x1^9x2^4x3^2+2", 5, 10);
    cout << Q.GetPolynom() << endl;
    polynom T("0",5, 10);
    T = P;
    //cout << T.GetPolynom() << endl;
    polynom G(Q);
    //cout << G.GetPolynom() << endl;
    G = P + Q;
    //cout << G.GetPolynom() << endl;
    G = P - Q;
    //cout << G.GetPolynom() << endl;
    G = P * Q;
    //cout << G.GetPolynom() << endl;
    G = P * 2;
    cout << G.GetPolynom() << endl;
}

