/*

27.Sumar columna específica de matriz: Función que sume los elementos de una columna
dada.
*/


float sumaColumna(int matriz[3][4], int columna)
{
  float suma = 0;
  for (int fila = 0; fila < 3; fila++)
  {
    suma += matriz[fila][columna];
  }
  return suma;
}

#include <iostream>
using namespace std;

int main(){
  int matriz[3][4]= {
    {4,2,1,3},
    {5,10,14,2},
    {9,8,6,23}
  };

  cout << "Matriz original:" << endl;
  for (int fila = 0; fila < 3; fila++)
  {
    for (int columna = 0; columna < 4; columna++)
    {
      cout << matriz[fila][columna] << "\t";
    }

    cout << '\n';
  }

  int columna;
  cout << "Ingrese la columna que desea sumar (0-3): ";
  cin >> columna;

  float resultado = sumaColumna(matriz, columna);
  cout << "La suma de la columna " << columna << " es: " << resultado << endl;

  return 0;
}