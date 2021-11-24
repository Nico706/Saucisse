#include <iostream>
using namespace std;

struct Noeud{
   int entier;
   Noeud *suivant;
};

struct Set{
    Noeud *elem;
    int taille;
};

class Set_chaine
{
private:
    Set *tab;
public:
    Set_chaine(/* args */){tab=new Set; tab->taille=0;tab->elem=NULL;};
    ~Set_chaine(){delete tab;cout<<"destructeur"<<endl;};
    int cardinal()const{return tab->taille;}
    void add_elem(int a);
    void print()const;
    bool is_in_set(int a)const;
    };

