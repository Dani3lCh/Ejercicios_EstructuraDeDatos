#include <iostream>

using namespace std;

int GradosAFahrenheit(int g){
  return (g * 9/5) + 32;
}


int main(){
  double result;
  int Grados;

  cout<<"Ingrese los grados centigrados:"<<endl;
  cin>>Grados;

  result = GradosAFahrenheit(Grados);

  cout<<"Los grados Fahrenheit son "<<result<<endl;
}
