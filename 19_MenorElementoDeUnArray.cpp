/*
19.Menor elemento en arreglo: Encontrar el valor mínimo en un arreglo
unidimensional.
*/
#include <iostream>
using namespace std;

int main(){
  int n, menor;
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>n;

  int arreglo[n];
  for(int i=0; i<n; i++){
    cout<<"Ingrese el elemento "<<i+1<<": ";
    cin>>arreglo[i];
  }
  menor = arreglo[0];
  for(int i=1; i<n; i++){
    if(arreglo[i]<menor){
      menor = arreglo[i];
    }
  }
  cout<<"El menor elemento del arreglo es: "<<menor<<endl;
}