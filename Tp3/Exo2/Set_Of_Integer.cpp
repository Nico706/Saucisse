#include <iostream>
#include "Set_Of_Integer.h"
using namespace std;


void Set_Of_Integer::initialiser()
{
    for (int i = 0; i < n_elem_max; i++)
    {
        set[i]=0;
    }
}

void Set_Of_Integer::add_elem(int a)
{
    set[n_elem++]=a;
}

int Set_Of_Integer::cardinal()
{
    return n_elem;
}

bool Set_Of_Integer::is_in_set(int a)
{
    bool res=false;
    for (int i = 0; i < cardinal(); i++)
    {
        if(set[i]==a)res=true;
    }
    return res;
}