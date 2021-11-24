#include<iostream>
using namespace std;

class Set_Of_Integer
{
private:
    int *set;
    const int n_elem_max;
    int n_elem;
public:
    Set_Of_Integer(int max=10):n_elem_max(max){n_elem=0; set=new int[n_elem_max]; cout<<"Constructeur"<<endl;}
    ~Set_Of_Integer(){cout<<"destructeur"<<endl;};
    void initialiser();
    void add_elem(int a);
    int cardinal();
    bool is_in_set(int a);
};

