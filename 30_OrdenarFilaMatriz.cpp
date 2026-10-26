/*
30.Ordenar fila de matriz: Ordenar en forma ascendente o descendente los
elementos de una fila específica.
*/

#include <iostream>
using namespace std;

int main(){
  int matriz[3][3] = {
    {9, 2, 7},
    {4, 9, 2},
    {3, 8, 1}
  };
  
  // Mostrar la matriz original
  cout << "Matriz original:" << endl;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << matriz[i][j] << "\t ";
    }
    cout << endl;
  }

  int fila;
  cout << "Ingrese el número de fila a ordenar (0-2): ";
  cin >> fila;

  // Ordenar la fila seleccionada en forma ascendente
  for (int i = 0; i < 3 - 1; i++)
  {
    for (int j = 0; j < 3 - 1 - i; j++)
    {
      if (matriz[fila][j] > matriz[fila][j + 1])
      {
        // Intercambiar elementos
        int temp = matriz[fila][j];
        matriz[fila][j] = matriz[fila][j + 1];
        matriz[fila][j + 1] = temp;
      }
    }
  }

  // Mostrar la matriz ordenada
  cout << "Matriz después de ordenar la fila " << fila << ":" << endl;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << matriz[i][j] << "\t ";
    }
    cout << endl;
  }
  return 0;
}