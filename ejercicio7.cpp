#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
}

int sumar(int a, int b) {
  return a + b;
}

int restar(int a, int b) {
  return a - b;
}

int multiplicar(int a, int b) {
  return a * b;
}

float dividir(int a, int b) {
  float c, d;
  c = float(a);
  d = float(b);
  return c / d;
}

int modulo(int a, int b) {
  return a % b;
}

int main() {
    char answer;
    int opcion, num_1, num_2, resultado;
    float result;
    do {
      mostrarMenu();
      cout<< "Ingrese una opcion: ";
      cin>> opcion;
      cout<< "Ingrese los dos numeros separados por un espacio: ";
      cin>> num_1>> num_2;
      switch (opcion) {
        case 1:
          resultado = sumar(num_1, num_2);
          cout<< "Resultado: "<< resultado<< "\n";
          break;
        case 2:
          resultado = restar(num_1, num_2);
          cout<< "Resultado: "<< resultado<< "\n";
          break;
        case 3:
          resultado = multiplicar(num_1, num_2);
          cout<< "Resultado: "<< resultado<< "\n";
          break;
        case 4:
          result = dividir(num_1, num_2);
          cout<< "Resultado: "<< result<< "\n";
          break;
        case 5:
          resultado = modulo(num_1, num_2);
          cout<< "Resultado: "<< resultado<< "\n";
          break;
      }
      cout<< "Digite y si desea continuar ";
      cin>> answer;
    } while(answer == 'y');
    return 0;
}
