#include <iostream>
using namespace std;

int SOMME_TAB(int *tab, int N);
int* saisie_tableau(int nb_elem);
void affiche(int *tab, int taille);

int main()
{
    //première partie de l'exo
    int tab[]={12,12,6,5};
    SOMME_TAB(tab,4);
    //Deuxième partie de l'exo
    int nb_elem;
    cout<< "entrez le nombre d'elements du tableau :";
    cin>>nb_elem;
    if (nb_elem>100)
    {
        cout<<"impossible, table too big"<<endl;
    }
    int *tab2;
    tab2=saisie_tableau(nb_elem);
    affiche(tab2,nb_elem);
    SOMME_TAB(tab2,nb_elem);
    return 0;
}


int SOMME_TAB(int *tab, int N)
{
    int res=0;
    for (int i = 0; i < N; i++)
    {
        res+=tab[i];
    }
    cout<<"la somme des elements du tableau est :"<<res<<endl;
    return res;
}

int* saisie_tableau(int taille)
{
    int *tab;
    tab=new int [taille];
    for(int i=0;i<taille;i++){
        cin>>tab[i];
    }
    return tab;
}

void affiche(int *tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        cout<<tab[i];
    }
    cout<<endl;
}
