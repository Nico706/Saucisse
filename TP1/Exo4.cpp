#include <iostream>
#include <cstring>
using namespace std;

char** saisie_tableau(int taille, int nb_char);
void affiche(char **tab);
void affiche_inverse(char **tab);
int position_min_lexico(char **MOT, int taille);
void tri_iteratif(char *tableau[], int taille);

int main(){
    /*
    cout<<"Création du tableau de 10 phrases et de 200 caractères max"<<endl;
    char **TAB;
    TAB=saisie_tableau(10,200);
    affiche(TAB);
    affiche_inverse(TAB);
    */
   cout<<"Création du tableau de 10 phrases et de 50 caractères max"<<endl;
    char**MOT;
    int taille=10;
    MOT=saisie_tableau(taille,50);
    affiche(MOT);
    tri_iteratif(MOT,taille);
    affiche(MOT);
    for (int i = 0; i < taille; i++) {
        cout<<MOT[i]<<endl;
        delete[](MOT[i]);
    }
    delete MOT;
    cout<<"Supression effectuée"<<endl;
    return 0;
}

char** saisie_tableau(int taille, int nb_char){
    char **tab;
    tab=new char *[taille];
    for(int i=0;i<taille;i++){
        tab[i]=new char[nb_char];
        cin>>tab[i];
    }
    return tab;
}

void affiche(char **tab){
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}

void affiche_inverse(char **tab){
    cout<<endl;
    for(int i=9;i>=0;i--){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}

void tri_iteratif(char **tableau, int taille)
 {
   char *temp;
   int i, j;
   for (i = 0; i < taille; i++)
    for (j = 0; j < taille; j++)
      if (strcmp(tableau[i], tableau[j]) < 0)
        {
          temp = tableau[i];
          tableau[i] = tableau[j];
          tableau[j] = temp;
        }
  }


