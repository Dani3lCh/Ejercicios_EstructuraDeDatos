/*
  20.Invertir un arreglo: Invertir el orden de los elementos de un arreglo (ej: [1,2,3]
→ [3,2,1]).
*/

#include <iostream>
using namespace std;


int main (){
  int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
  int tamano = sizeof(arreglo)/sizeof(arreglo[0]);

  //array original
  for(int i = 0; i < tamano; i++){
    cout << arreglo[i] << " ";
  }
  cout << endl;

  //invertir arreglo

  for(int i = 0,j = tamano - 1; i < j; i++, j--){
    int temp = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temp;
  }


  //array invertido
  for(int i = 0; i < tamano; i++){
    cout << arreglo[i] << " ";
  }
  cout << endl;
  
  return 0;
}