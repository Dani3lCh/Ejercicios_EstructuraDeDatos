/*
21.Buscar elemento en arreglo: Determinar si un valor específico existe en el
arreglo y en qué posición.
*/

#include <iostream>

using namespace std;

int main(){
  int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
  int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
  int elemento = 9;
  bool encontrado = false;
  int posicion = -1;

  for(int i = 0; i < tamano; i++){
    if(arreglo[i] == elemento){
      encontrado = true;
      posicion = i;
      break;
    }
  }

  if(encontrado){
    cout << "Elemento encontrado en la posición: " << posicion << endl;
  } else {
    cout << "Elemento no encontrado." << endl;
  }

  return 0;
}