#include <iostream>
using namespace std;
void affichage(int **A,int n, int m);

int main(){
    int n; int m;
    cout <<"A[N][M] Enter N :";
    cin>>n;
    cout <<endl<<"Enter M :";
    cin>>m;
    cout<<endl;
    //creation matrice
    int **A;
    A=new int *[n];
    for(int i=0;i<n;i++){
        A[i]=new int[m];
    }

    int **T;
    T=new int *[m];
    for(int i=0;i<m;i++){
        T[i]=new int[n];
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<"Enter A["<<i<<"]["<<j<<"] :";
            cin>>A[i][j];
            cout<<endl;
        }
    }

    //transposée
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            T[j][i]=A[i][j];
        }
    }

    affichage(A,n,m);
    affichage(T,n,m);
    return 0;
 }

void affichage(int **A, int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
        cout<<A[i][j]<<" ";
     }
    cout<<endl;
    }
}

