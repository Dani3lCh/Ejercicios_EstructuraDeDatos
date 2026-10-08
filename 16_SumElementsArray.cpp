#include <iostream>

using namespace std;
/*
16.Suma de elementos de un arreglo: Sumar todos los elementos de un arreglo
unidimensional.
*/
int main(){
  int Elementos[5] = {1,4,9,4,5};
  int suma = 0;
  for (int i = 0; i < 5; i++){
    suma  = suma + Elementos[i];
  }
  cout << "La suma de los elementos es: " << suma << endl;

}