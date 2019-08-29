#include <iostream>
#include <vector>
using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    int number;
    vector <int> lista;
    do {
      cin>> number;
      if(number == -1) 
        break;
      else
        lista.push_back(number);
    } while(true);
  return lista;
}

int mediana(vector<int> &lista) {
    int mediana, size_lista = lista.size();
    if(size_lista % 2 == 0) 
      mediana = (lista[(size_lista/2)-1] + lista[size_lista/2]) / 2;
    else
      mediana = lista[(size_lista-1)/2];
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
    return 0;
}
