#include "pile.h"
#include <iostream>
using namespace std;

int main() {
Pile p (5);
cout<<"test empil"<<endl;
p.empiler(1);
p.empiler(2);
p.empiler(3);
p.afficher();
cout<<"Il y'a "<<p.nb_elements()<<" elements actuellement dans la pile."<<endl;
cout<<"test depil"<<endl;
p.depiler();
p.depiler();
p.afficher();

Pile p1(6);
Pile p2(8);
cout<<"Il y'a "<<p.nb_piles()<<" piles."<<endl;

return 0;
}
