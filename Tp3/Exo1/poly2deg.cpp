#include <iostream>
#include <cmath>
#include "complexe.h"
#include "poly2deg.h"
#include <vector>
using namespace std;

poly2deg::poly2deg(int a, int b, int c):_a(a),_b(b), _c(c)
{
    complexe s1,s2;
    cout<<"construction polynome"<<endl;
}

poly2deg::~poly2deg()
{
    cout<<"destructeur"<<endl;
}

void poly2deg::solution()
{
    int delta=_b*_b-4*_a*_c;
    if (delta<0)
    {
        cout<<"il y'a deux solutions complexes"<<endl;
        s1.set_re(-_b/(2*_a));
        s1.set_im(-sqrt(-delta)/2*_a);

        s2.set_re(-_b/(2*_a));
        s2.set_im(sqrt(-delta)/2*_a);
    }
    else if (delta==0)
    {
        cout<<"il n'y à qu'une seule solution"<<endl;
        s1.set_re(-_b/2*_a);
        s1.set_im(0);
    }
    else
    {
        cout<<"Il y'a deux solutions réelles"<<endl;
        s1.set_re((-_b-sqrt(delta))/(2*_a));
        s1.set_im(0);
        s2.set_re((-_b+sqrt(delta))/(2*_a));
        s2.set_im(0);
    }
}

void poly2deg::prints()
{
    cout<<"s1= "<<endl;
    s1.print();
    cout<<"et s2="<<endl;
    s2.print();
}
