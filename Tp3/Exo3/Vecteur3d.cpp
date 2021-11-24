#include <iostream>
#include "Vecteur3d.h"

using namespace std;

Vecteur3d::Vecteur3d(const Vecteur3d& vect)
{
	_x = vect._x;
	_y = vect._y;
	_z = vect._z;
    cout<<"constructeur"<<endl;
}

void Vecteur3d::print() const
{
	cout<<"("<<_x<<", "<<_y<<", "<<_z<<")"<<endl;
}

extern Vecteur3d produit(Matrice& M, Vecteur3d& V);

