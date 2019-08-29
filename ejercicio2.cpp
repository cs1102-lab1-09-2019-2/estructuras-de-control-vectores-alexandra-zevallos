#include <iostream>
#include <vector>

using namespace std;

int moda(vector<int> &lista);
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

int moda(vector<int> &lista) {
    int lista_size, moda_place, moda, repeticiones = 0, mayor = 0;
    lista_size = lista.size();
    vector <int> repeticiones_totales;
    for(int r = 0; r < lista_size; r++) {
      for(int c = 0; c < (lista_size - 1); c++) 
        if(r != c) 
          if(lista[r] == lista[c])
            repeticiones++;
      repeticiones_totales.push_back(repeticiones);
      repeticiones = 0;
    }
    for(int a = 0; a < lista_size; a++) 
      if(repeticiones_totales[a] > mayor)
        mayor = repeticiones_totales[a];
    for(int b = 0; b < lista_size; b++)
      if(mayor == repeticiones_totales[b])
        moda_place = b;
    moda = lista[moda_place];
    return moda;
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados: (cuando termine de ingresar los numeros digite -1) \n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
    return 0;
}

