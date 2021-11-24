#include "Set_chaine.h"

void Set_chaine::add_elem(int a)
{
    //Creation nouveau noeud
    Noeud *ptr;
    ptr=new Noeud;
    ptr->entier=a;
    //placement du noeud dans la chaine
    ptr->suivant=tab->elem;
    tab->elem=ptr;
    tab->taille++;
}

bool Set_chaine::is_in_set(int a)const
{
    Noeud *temp;
    bool res=false;
    temp=tab->elem;
    while((res=false)&&(temp!=NULL))
    {
        if (temp->entier==a)
        {
            res=true;
        }
        temp=temp->suivant;
    }
    return res;
}

void Set_chaine::print()const
{
    Noeud *temp;
    temp=tab->elem;
    while (temp!=NULL)
    {
        cout<<temp->entier<<endl;
        temp=temp->suivant;
    }
}