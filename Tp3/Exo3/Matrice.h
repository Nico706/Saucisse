#ifndef _Matrice_h_
#define _Matrice_h_
#include "Vecteur3d.h"
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