#include <iostream>
#include <cstring>
using namespace std;

char saisie();
void del_prem_occ(char*ch1,char*ch2);
int len(char *ch1);

int main()
{
    char ch1=saisie();
    char ch2=saisie();
    cout<<ch1<<endl;
    cout<<ch2<<endl;
    del_prem_occ(&ch1,&ch2);
    cout<<ch1<<endl;
    return 0;
}

char saisie(){
    char res;
    cout<<"Saisissez une chaine de caractères"<<endl;
    cin>>res;
    return res;
}

void del_prem_occ(char*ch1,char*ch2)
{
    bool trouvee=false;
    while(!trouvee){
        for (int i = 0; i < len(ch1); i++)
        {
            for (int j = 0; j < len(ch2); j++)
            {
                if(ch1[i]=ch2[i])
                //Je ne sais pas comment faire le test 

                trouvee=True;
            }
        }
    }
}

int len(char *ch1){
    char tmp;
    int res=0;
    while (tmp!='\0')
    {
        tmp=ch1[res];
        res+=1;
    }
    return res;
}