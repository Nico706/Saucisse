#pragma once

class point
{
    public:
        point(double x=0.0, double y=0.0);
        ~point();
        void print();
        double ordonnee();
        double abscisse();
        void translate(double x, double y);
        double theta();
        double rho();
        void rotation(double theta);
    private:
        double _x, _y;
} ;

