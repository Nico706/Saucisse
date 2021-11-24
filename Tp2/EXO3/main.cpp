#include "point.h"
#include <iostream>
using namespace std;

int main() {
point p1(0);
point p2(-1,-1);
p1.print();
p2.print();
cout<<"x "<<p2.abscisse()<<endl;
cout<<"y "<<p2.ordonnee()<<endl;
p1.translate(2.5,5);
p1.print();
cout<<"rho "<<p2.rho()<<endl;
cout<<"theta "<<p2.theta()<<endl;
p2.rotation(0.785398); //(+45°)
p2.print();
return 0;
}
