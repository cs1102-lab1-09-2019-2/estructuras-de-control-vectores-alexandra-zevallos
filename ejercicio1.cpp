#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector <int> lista;
    int number;
    do {
      cin>> number;
      if(number == -1) 
      break;
      else 
        lista.push_back(number);
    } while (true);
    return lista;
}

float promedio(vector<int> &lista) {
    int lista_size;
    float promedio = 0;
    lista_size = lista.size();
    for(int r = 0; r < lista_size; r++) {
      promedio = promedio + lista[r];
    }
    promedio = promedio / lista_size;
    return promedio;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
    return 0;
}
