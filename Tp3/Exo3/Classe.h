#ifndef _Classe_h_
#define _Classe_h_
#include <iostream>
using namespace std;

class Vecteur3d;
class Matrice;
class Matrice
{
private:
    double mat[3][3];
public:
    Matrice(double a[3][3]);
    Matrice();
    ~Matrice(){cout<<"destructeur"<<endl;};
    void print()const;
    friend Vecteur3d produit(Matrice& M, Vecteur3d& V);
};

class Vecteur3d
{
private:
    double _x, _y, _z;

public:
	Vecteur3d(double x = 0.0, double y = 0.0, double z =  0.0): _x(x), _y(y), _z(z){cout<<"constructeur"<<endl;};
	Vecteur3d(const Vecteur3d&);
	~Vecteur3d(){cout<<"destructeur"<<endl;};;
	void print() const;

    friend Vecteur3d  produit(Matrice& M, Vecteur3d& V);
};
#endif