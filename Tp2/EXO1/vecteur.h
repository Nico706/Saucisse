#pragma once

class Vecteur3d{
	public:
		Vecteur3d();
		Vecteur3d(double x=0.0, double y=0.0,double z=0.0);
		~Vecteur3d();
		Vecteur3d(const Vecteur3d &vect);
		
		int aaa(){ return 0; }
		void print();
		
	private :
		double _x, _y, _z ;
	};
	
	
