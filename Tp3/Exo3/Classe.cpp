#include "Classe.h"

using namespace std;

Matrice::Matrice()
{
    cout<<"constructeur"<<endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat[i][j] = 0.0;
}

Matrice::Matrice(double a[3][3])
{
    cout<<"constructeur"<<endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat[i][j] = a[i][j];
}


void Matrice::print()const
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cout<<mat[i][j]<<"\t";
	cout<<endl;
}

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

Vecteur3d produit(Matrice& M, Vecteur3d& V)
{
	Vecteur3d Y;

	Y._x = M.mat[0][0] * V._x+ M.mat[0][1] * V._y + M.mat[0][2] * V._z;
	Y._y = M.mat[1][0] * V._x+ M.mat[1][1] * V._y + M.mat[1][2] * V._z;
	Y._z = M.mat[2][0] * V._x+ M.mat[2][1] * V._y + M.mat[2][2] * V._z;
	return Y;
}