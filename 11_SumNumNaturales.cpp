/*
 10.Suma primeros n naturales: Función que sume todos los números desde 1
hasta n.
*/


#include<iostream>

using namespace std;

int SumNumeros(int n){
  int suma = 0;

  if(n<=0){
    cout<<"Solo numeros enteros...";
    return 0;
  }

  for (int i = 1; i <= n; i++)
  {
    suma = suma + i;
  }

  return suma;
}


int main(){
  int numero = 0;
  int total;

  cout<<"Ingrese un numero positivo:";
  cin>>numero;

  total = SumNumeros(numero);

  cout<<"Sumatoria total:"<<total;
  
  return 0;
}