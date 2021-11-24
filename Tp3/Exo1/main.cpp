#include "complexe.h"
#include "poly2deg.h"
#include <iostream>

using namespace std;


int main() {
    //test complexe
    cout<<"creation Z1"<<endl;
    complexe z1=complexe(5,5);
    z1.print();
    cout<<"creation Z2"<<endl;
    complexe z2=complexe(4,4);
    z2.print();
    cout<<"creation Z3=Z2+Z1"<<endl;
    complexe z3=z1+z2;
    z3.print();
    cout<<"z3+=z1"<<endl;
    z3+=z1;
    z3.print();
    cout<<"z3-=z1"<<endl;
    z3-=z1;
    z3.print();
    cout<<"z1*=z1"<<endl;
    z1*=z1;
    z1.print();

    //test poly2deg
    cout<<"Entrez les variables a, b et c pour resoudre ax²+bx+c=0"<<endl;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    poly2deg p=poly2deg(a,b,c);
    cout<<"Identifiez votre solution :"<<endl;
    p.solution();
    p.prints();
}
