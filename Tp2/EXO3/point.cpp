#include <iostream>
#include "point.h"
#include <cmath>

using namespace std;

point::point(double a, double b): _x( a ) , _y( b ){
    cout<<"construction point"<<endl;
}

point::~point(){
    cout<<"destruction"<<endl;
}

void point::print(){
    cout<<"Le vecteur a pour coordonnées x:"<<_x<<"   y:"<<_y<<endl;
}

double point::abscisse(){
    return _x;
}

double point::ordonnee(){
    return _y;
}

void point::translate(double x1, double y1){
    _x+=x1;
    _y=+y1;
}

double point::rho(){
    return sqrt((_x*_x)+(_y*_y));
}

double point::theta(){
    return atan2(_x,_y);
}

void point::rotation(double theta1){
    double new_theta=theta()+theta1;
    _x=rho()*cos(new_theta);
    _y=rho()*sin(new_theta);
};