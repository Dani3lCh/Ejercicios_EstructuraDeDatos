#include <iostream>

using namespace std;

double DolaresAlempiras(double d){
  return d * 26.81;
}

int main(){
  double result;
  double Dolares;

  cout<<"Ingrese la cantidad de dolares:"<<endl;
  cin>>Dolares;

  result = DolaresAlempiras(Dolares);

  cout<<"La cantidad en lempiras es:"<<"L."<<result<<endl;
}