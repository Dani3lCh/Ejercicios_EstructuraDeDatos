
/*suma de dos matrices*/
#include <iostream>

using namespace std;

int main()
{

  int fila, columna;

  int Matriz1[2][3] = {
      {2, 3, 8},
      {10, 90, 10}};

  int Matriz2[2][3] = {
      {10, 20, 2},
      {10, 4, 21}};

  int Resultado[2][3] = {0};

  for (fila = 0; fila < 2; fila++) // llenando las 2 matrices
  {
    for (columna = 0; columna < 3; columna++)
    {
      Resultado[fila][columna] = Matriz1[fila][columna] + Matriz2[fila][columna];
    }
  }
  cout << "resultado de la suma de las 2 matrices:" << endl;

  for (fila = 0; fila < 2; fila++) // Resultado de la suma
  {
    for (columna = 0; columna < 3; columna++)
    {

      cout << Resultado[fila][columna] << '\t';
    }
    cout << endl;
  }

  return 0;
}
