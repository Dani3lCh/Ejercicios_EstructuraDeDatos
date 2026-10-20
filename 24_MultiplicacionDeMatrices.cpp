/*multiplicación de dos matrices*/

#include <iostream>
using namespace std;

int main(){
  
  int fila, columna;

  int Matriz1[2][3] = {
      {2, 3, 8},
      {10, 90, 10}};

  int Matriz2[3][2] = {
      {10, 20},
      {2, 10},
      {4, 21}};

  int Resultado[2][2] = {0};

  for (fila = 0; fila < 2; fila++) //llenando las 2 matrices
  {
    for (columna = 0; columna < 2; columna++)
    {
      for (int k = 0; k < 3; k++)
      {
        Resultado[fila][columna] += Matriz1[fila][k] * Matriz2[k][columna];
      }
    }
    
  }
  
  cout << "resultado de la multiplicación de las 2 matrices:" << endl;

  
  for (fila = 0; fila < 2; fila++)//Resultado de la multiplicación
  {
    for (columna = 0; columna< 2; columna++)
    {

      cout<<Resultado[fila][columna]<<'\t';
    }
    cout<<endl;
  }
  return 0;
}