#include <iostream>

using namespace std;

//Funcion de calcular el area de un triangulo
int AreaDeUnTriangulo(int b, int h){
  return b * h;
}

int main(){
  double result;
  int Base;
  int Altura;

  cout<<"Ingrese la base del triangulo:"<<endl;
  cin>> Base;

  cout<<"Ingrese la altura del triangulo:"<<endl;
  cin>>Altura;

  result = AreaDeUnTriangulo(Base,Altura);

  cout<<"El area del triangulo es "<<result<<endl;

}