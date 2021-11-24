#include <iostream>
using namespace std;
void affichage(int **A,int n, int m);
int** creer_matrice(int n,int m);
int** produit_matrice(int **A,int **B, int n, int m, int p);
void saisir_matrice(int **A, int n, int m);

int main(){
    int n, m, p;
    cout <<"A[N][M] / B[M][P] Enter N :";
    cin>>n;
    cout <<endl<<"Enter M :";
    cin>>m;
    cout<<endl;
    cout <<endl<<"Enter P :";
    cin>>p;
    cout<<endl;


    //creation matrice
    int **A=creer_matrice(n,m);
    int **B=creer_matrice(m,p);
    int **C=creer_matrice(n,p);
    saisir_matrice(A,n,p);
    saisir_matrice(B,n,p);
    affichage(produit_matrice(A,B,n,m,p),n,p);
    return 0;
}



int** creer_matrice(int n,int m){
    int **M;
    M=new int *[n];
    for(int i=0;i<n;i++){
        M[i]=new int[m];
    }
    return M;
}


void saisir_matrice(int **A, int n, int m){
    cout<<"Saisir la matrice"<<endl;
    int tmp;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
        cout<<"Saisir le coef : ["<<i<<"]"<<"["<<j<<"]"<<endl;;
        cin>>tmp;
        A[i][j] = tmp;
        }
    }
    cout<<endl;
}

void affichage(int **A, int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
        cout<<A[i][j]<<" ";
     }
    cout<<endl<<endl;
    }
}


int** produit_matrice(int **A,int **B,int n, int m, int p){
    int **C=creer_matrice(n,p);
    for(int i=0; i< n; i++){
      for(int j=0; j< p; j++){
          for(int k = 0; k < m; k++){
            C[i][j] += A[i][k] * B[k][j];
          }
      }
    }
    return C;
}
