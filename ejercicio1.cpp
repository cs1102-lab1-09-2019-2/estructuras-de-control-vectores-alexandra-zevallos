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
    float promedio = 0;
    for(int r = 0; r < lista.size(); r++) {
      promedio = promedio + lista[r];
    }
    promedio = promedio / lista.size();
    return promedio;
}

int main() {
    cout<<"Calcular el promedio de los ingresados: (digite -1 para salir)\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
    return 0;
}
