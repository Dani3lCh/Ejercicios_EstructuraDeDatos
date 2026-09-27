#include <iostream>

using namespace std;


double pi = 3.1416;

double CalcularPerimetro(double r){

  return 2*pi*r; 
}



int main(){
  double Radio,result;

  cout<<"Ingresa el radio del circulo:"<<endl;
  cin>>Radio;

  result = CalcularPerimetro(Radio);

  cout<<"El perimetro del circulo es:"<<result;

  
  return 0 ;


}