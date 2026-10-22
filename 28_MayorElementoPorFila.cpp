/*28.Mayor elemento por fila: Encontrar el valor máximo en cada fila de una matriz.*/

#include <iostream>
using namespace std;

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

  for(int fila = 0; fila<3; fila++){
    int mayor = matriz[fila][0];
    for (int columna = 1; columna < 4 ; columna++)
    {
      if(matriz[fila][columna] > mayor){
        mayor = matriz[fila][columna];
      }
    }
    cout<<"El mayor elemento de la fila "<<fila<<" es: "<<mayor<<endl;
  }

  return 0;
}