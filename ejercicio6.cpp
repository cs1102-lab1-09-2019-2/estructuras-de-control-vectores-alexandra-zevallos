#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main() {
  int num_1, num_2, num_3, size_n, mayor = 0;
  vector <int> n;
  cout<< "Ingrese tres numeros separados por un espacio: \n";
  cin>> num_1>> num_2>> num_3;
  n.push_back(num_1);
  n.push_back(num_2);
  n.push_back(num_3);
  for(int i = 0; i < n.size(); i++) {
    if(n[i] > mayor)
      mayor = n[i];
  }
  cout<< "El mayor valor es: "<<mayor;
  return 0;
}
