#ifndef _complexe_h_
#define _complexe_h_
//pour eviter une double definition de classe, penser a bien mettre le endif

class complexe
{
private:
    int _re;
    int _im;
public:
    complexe(int re=0, int im=0);
    complexe(const complexe &a):_re(a._re),_im(a._im){}
    //utiliser le formalisme ci dessus partout c'est plus propre
    ~complexe();
    void print()const;
    inline int get_re()const{return _re;}
    inline int get_im()const{return _im;}
    inline void set_re(int a){_re=a;}
    inline void set_im(int a){_im=a;}
    //Formalisme C
    /*
    complexe add(complexe b);
    complexe sub(complexe b);
    complexe mul(complexe b);
    */

    //methode cpp
    complexe operator+=(const complexe &a);
    complexe operator+(const complexe &a)const;
    complexe operator-=(const complexe &a);
    complexe operator-(const complexe &a)const;
    complexe operator*=(const complexe &a);
    complexe operator*(const complexe &a)const;
};

#endif