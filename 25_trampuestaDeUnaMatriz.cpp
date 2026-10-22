#include <iostream>
/*trampuesta de una matriz*/
using namespace std;

int main(){
  
  int Matriz[3][4]= {
    {4,2,1,3},
    {5,10,14,2},
    {9,8,6,23}
  };


  cout<<"Matriz original:"<<endl;
  for(int fila = 0; fila<3; fila++){
    for (int columna = 0; columna < 4 ; columna++)
    {

      cout<<Matriz[fila][columna]<<"\t";
    }
    cout<<'\n';
  }

  //la trampuesta
  cout << "Matriz trampuesta:" << endl;
  for(int col = 0; col<4;col++){
    for (int fil = 0; fil < 3; fil++)
    {
      cout<<Matriz[fil][col]<<"\t";
    }
    cout<<'\n';
  }


  return 0;
}
