#include <iostream>

using namespace std;
/*
  26.Sumar fila específica de matriz: Función que sume los elementos de una fila
dada.
*/

float sumaFila(int matriz[3][4], int fila){
  float suma = 0;
  for(int col = 0; col<4; col++){
    suma += matriz[fila][col];
  }
  return suma;
}


int main(){
  int matriz[3][4]= {
    {4,2,1,3},
    {5,10,14,2},
    {9,8,6,23}
  };

  cout<<"Matriz original:"<<endl;
  for(int fila = 0; fila<3; fila++){
    for (int columna = 0; columna < 4 ; columna++)
    {
      cout<<matriz[fila][columna]<<"\t";
    }

    cout<<'\n';
  }

  int fila;
  cout<<"Ingrese la fila que desea sumar (0-2): ";
  cin>>fila;


  float resultado = sumaFila(matriz, fila);
  cout<<"La suma de la fila "<<fila<<" es: "<<resultado<<endl;

  return 0;
}