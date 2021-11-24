#include "Set_Of_Integer.h"
#include <iostream>

using namespace std;


int main()
{
    //test des fonctions de la classe set_of_integer
    Set_Of_Integer set;
    set.initialiser();
    set.add_elem(8);
    set.add_elem(7);
    set.add_elem(6);
    set.add_elem(4);
    set.add_elem(3);
    set.add_elem(1);
    cout<<"le cardinal de de l'ensemble est : "<<set.cardinal()<<endl;
    if (set.is_in_set(8))
    {
        cout<<"8 est bien dans l'ensemble"<<endl;
    }
    else
    {
        cout<<"8 n'este pas dans l'ensemble"<<endl;
    }
    cout<<"\n"<<endl;


    //programme qui determine le nombre d'entiers differents dans un tableau
    int tab[]={1,2,3,4,4,6,7,8};
    int taille=sizeof(tab)/sizeof(tab[0]);
    Set_Of_Integer set1(taille);
    for (int i = 0; i < taille; i++)
    {
        if (!set1.is_in_set(tab[i]))
        {
            set1.add_elem(tab[i]);
        }
    }
    cout<<"Il y'a "<<set1.cardinal()<<" elements differents dans le tableau qui lui compte "<<taille<<" elements"<<endl;

}
