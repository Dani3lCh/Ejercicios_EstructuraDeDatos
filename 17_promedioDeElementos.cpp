#include <iostream>

using namespace std;
/*
17.Promedio de elementos de un arreglo: Calcular el promedio de valores en un
arreglo.
*/

int main(){
  int n, suma=0;
  double promedio;
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>n;

  int arreglo[n];
  for(int i=0; i<n; i++){
    cout<<"Ingrese el elemento "<<i+1<<": ";
    cin>>arreglo[i];
    suma+=arreglo[i];
  }
  promedio = (double)suma/n;
  cout<<"El promedio de los elementos es: "<<promedio<<endl;

}