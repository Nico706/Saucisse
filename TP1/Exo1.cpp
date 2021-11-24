#include <iostream>
using namespace std;

int nbjour (int mois, int annee);

int main(){
    cout<<"En fevrier 2021 il y'a "<<nbjour(2,2021)<<" jours"<<endl;
    return 0;
}

int nbjour (int mois, int annee)
{
/*Le mois de février a 28 jours ou 29 les années bissextiles.
Une année est bissextile si elle est divisible par 4, mais pas si elle est divisible par 
100 sauf si elle est divisible par 400*/
int res;
int m[]={31,28,31,30,31,30,31,31,30,31,30,31};

if (mois==2){
    if ((annee%4==0 && annee%100!=0)|| (annee%400==0)){
        //bissextile
        res=29;
        } 
    else res=28;
}
else{
    res=m[mois];
}
return res;
}

