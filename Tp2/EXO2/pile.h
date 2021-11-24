#pragma once

class Pile
{
    public:
        Pile(int Max);
        ~Pile(){ delete [] _table; n_piles--;}
        void empiler(int);
        int depiler();
        void afficher();
        inline int nb_elements(){return _nb_elem;}
        inline int nb_piles(){return n_piles;}
    private:
        const int _max;
        static int n_piles;
        int * _table;
        int _nb_elem ;
        enum pile_etat {ok, plein, vide} ;
        pile_etat _etat ;
} ;

