#include "vecteur.h"
#include <iostream>

int main() {
  Vecteur3d vect1(4.0, 5.0, 1.0);
  // Vecteur3d vect();
  std::cout << "Vect : " << std::endl;
  vect1.aaa();
  vect1.print();
  std::cout << "Vect1 : " << std::endl;
  vect1.print();
  Vecteur3d vect2(vect1);
  std::cout << "Vect2 copy vect : " << std::endl;
  vect1.print();
  return 0;
}
