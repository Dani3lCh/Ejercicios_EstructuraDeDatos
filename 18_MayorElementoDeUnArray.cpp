/*18.Mayor elemento en arreglo: Encontrar el valor máximo en un arreglo
unidimensional.*/

#include <iostream>
using namespace std;
int main(){
  int n, mayor;
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>n;

  int arreglo[n];
  for(int i=0; i<n; i++){
    cout<<"Ingrese el elemento "<<i+1<<": ";
    cin>>arreglo[i];
  }
  mayor = arreglo[0];
  for(int i=1; i<n; i++){
    if(arreglo[i]>mayor){
      mayor = arreglo[i];
    }
  }
  cout<<"El mayor elemento del arreglo es: "<<mayor<<endl;
}