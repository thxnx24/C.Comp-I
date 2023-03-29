#include <iostream>

int main() {
  int c0{0};
  int c1{1};
  int c2{2};
  int c3{3};
  int c4{4};

  std::cout << "\nLongitud          Area                Volumen \ndel cubo (cm)     del cubo (cm^2)     del cubo (cm^3)\n";
  std::cout << "\n" << c0 << "                 " << (6*c0*c0) << "                   " << (c0*c0*c0) 
            << "\n" << c1 << "                 " << (6*c1*c1) << "                   " << (c1*c1*c1) 
            << "\n" << c2 << "                 " << (6*c2*c2) << "                  " << (c2*c2*c2) 
            << "\n" << c3 << "                 " << (6*c3*c3) << "                  " << (c3*c3*c3) 
            << "\n" << c4 << "                 " << (6*c4*c4) << "                  " << (c4*c4*c4) ;

  return 0;
}