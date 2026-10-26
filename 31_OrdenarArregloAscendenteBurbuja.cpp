/*
31.Ordenar arreglo ascendente (Burbuja): Implementar algoritmo de burbuja para
orden ascendente.
*/

#include <iostream>
using namespace std;

void OrdenarAscendenteBurbuja(int ListNum[], int n)
{
  for (int pasada = 0; pasada < n - 1; pasada++)
  {
    bool HuboIntercambio = false;

    for (int j = 0; j < n - 1 - pasada; j++)
    {
      if (ListNum[j] > ListNum[j + 1])
      { 
        int temp = ListNum[j];
        ListNum[j] = ListNum[j + 1];
        ListNum[j + 1] = temp; 
        HuboIntercambio = true;
      }
    }

    if (!HuboIntercambio)
      return;
  }
}

// Mostrar arreglo
void MostrarArreglo(int ListNum[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << ListNum[i] << " ";
  }
  cout << endl;
}

int main()
{
  int ListNum[5] = {9, 2, 7, 4, 3};
  int n = sizeof(ListNum) / sizeof(ListNum[0]);

  cout << "Arreglo original: ";
  
  MostrarArreglo(ListNum, n);
  OrdenarAscendenteBurbuja(ListNum, n);

  cout << "Arreglo ordenado en forma ascendente: ";
  MostrarArreglo(ListNum, n);

  return 0;
}