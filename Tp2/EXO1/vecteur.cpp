#include "vecteur.h"

#include <iostream>
using namespace std;

Vecteur3d::Vecteur3d(){
	this ->_x=0.0;
	this ->_y=0.0; 
	this ->_z =0.0;
	cout<<"je suis dans le constructeur"<<endl;
	}


Vecteur3d::~Vecteur3d(){
	cout<<"je suis dans le destructeur"<<endl;
	}
	
/*
Vecteur3d::Vecteur3d(double _x, double _y,double _z){
	this ->_x=_x;
	this ->_y=_y; 
	this ->_z =_z;
	cout<<"je suis dans le constructeur"<<endl;
	}
*/

Vecteur3d::Vecteur3d(double a, double b,double c )
		: _x( a ) , _y( b ) , _z( c )
{
	cout<<"je suis dans le constructeur"<<endl;
}

void Vecteur3d::print(){	
	cout<<"Le vecteur a pour coordonnées x:"<<this->_x<<"   y:"<<this->_y<<"  z:"<<this->_z<<endl;
}
	

	
Vecteur3d::Vecteur3d(const Vecteur3d &vect) {
	this->_x=vect._x;
	this->_y=vect._y;
	this->_z=vect._z;
}
