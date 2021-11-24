#ifndef _Classe_h_
#define _Classe_h_
#include <iostream>
using namespace std;

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




#endif