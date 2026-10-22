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

  for(int col = 0; col<4; col++){
    int menor = matriz[0][col];
    for (int fila = 1; fila < 3 ; fila++)
    {
      if(matriz[fila][col] < menor){
        menor = matriz[fila][col];
      }
    }
    cout<<"El menor elemento de la columna "<<col<<" es: "<<menor<<endl;
  }

  return 0;
}