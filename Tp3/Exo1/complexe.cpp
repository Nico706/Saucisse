#include <iostream>
#include "complexe.h"
using namespace std;

complexe::complexe(int re, int im)
{
    cout<<"Constructeur"<<endl;
    _re=re;
    _im=im;
}

complexe::~complexe()
{
    cout<<"Destructeur"<<endl;
}

void complexe::print()const
{
    cout<<_re<<"+"<<_im<<"i"<<endl;
}

/*
complexe complexe::add(complexe b)
{
    complexe res(0,0);
    res.set_re(_re+b.get_re());
    res.set_im(_im+b.get_im());
    return res;
}

complexe complexe::sub(complexe b)
{
    complexe res(0,0);
    res.set_re(_re-b.get_re());
    res.set_im(_im-b.get_im());
    return res;
}


complexe complexe::mul(complexe b)
{
    complexe res(0,0);
    res.set_re(_re*b.get_re()*_im*b.get_im());
    res.set_im(_re*b.get_im()+_im*b.get_re());
    return res;
}
*/


//mieux
complexe complexe::operator+=(const complexe &a)
//Elle n'est pas constante car on viens modifier l'objet qui fait l'appel
{
    _re+=a._re;
    _im+=a._im;
    //this est un pointeur sur l'objet
    return *this;
}

complexe complexe::operator+(const complexe &a)const
{
    complexe res(*this);
    res+=a;
    return res;
}

complexe complexe::operator-=(const complexe &b)
{
    _re-=b._re;
    _im-=b._im;
    //this est un pointeur sur l'objet
    return *this;
}

complexe complexe::operator-(const complexe &a)const
{
    complexe res(*this);
    res-=a;
    return res;
}

complexe complexe::operator*=(const complexe &b)
{
    _re+=b._re*_re-_im*b._im;
    _im+=_re*b._im+_im*b._re;
    //this est un pointeur sur l'objet
    return *this;
}

complexe complexe::operator*(const complexe &a)const
{
    complexe res(*this);
    res*=a;
    return res;
}



