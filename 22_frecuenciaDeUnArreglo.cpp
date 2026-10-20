/*
22.Frecuencia de un elemento: Contar cuántas veces aparece un valor en el
arreglo.
*/

#include <iostream>
using namespace std;

int main(){
  int arreglo[10] = {1, 2, 3, 4, 5, 1, 2, 1, 3, 4};
  int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
  int elemento;
  int frecuencia = 0;


  cout << "Ingrese el elemento a buscar de esta lista: ";
  for (int i = 0; i < tamano; i++)
  {
    cout << arreglo[i] << " ";
  }
  cout << endl;
  cin >> elemento;

  


  for(int i = 0; i < tamano; i++){
    if(arreglo[i] == elemento){
      frecuencia++;
    }
  }

  cout << "El elemento " << elemento << " aparece " << frecuencia << " veces en el arreglo." << endl;

  return 0;
}