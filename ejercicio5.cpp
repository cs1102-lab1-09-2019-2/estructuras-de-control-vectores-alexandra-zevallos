#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2, solucion;
    cout<< "Ingrese las variables 'a','b' y 'c' separadas por un espacio\n";
    cin>>a>>b>>c;
    delta = pow(b,2) - 4*a*c;
    if(a == 0 & b == 0) {
      cout<< "No tiene solucion: a = 0, b = 0";
      return 0;
    }
    if(a == 0) {
      solucion = -(c / b);
      cout<< "Tiene una solucion: "<<solucion;
      return 0;
    }
    if(delta < 0) {
      cout<< "No tiene solucion: delta < 0";
      return 0;
    }
    else {
      x1 = (-1*b + pow(delta,1/2)) / (2*a);
      x2 = (-1*b - pow(delta,1/2)) / (2*a);
      cout<< "La ecuacion tiene dos soluciones: x1 = "<< x1<< " x2 = "<< x2;
      return 0;
    }
}
