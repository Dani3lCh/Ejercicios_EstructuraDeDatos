#include <iostream>

using namespace std;


int Factorial(int n){
  if(n==0 || n==1){
    return 1;
  }else{
    return n * Factorial(n-1);
  }
}


int main(){
  int result;
  int numero;

  cout<<"Ingrese un numero:"<<endl;
  cin>>numero;

  result = Factorial(numero);

  cout<<"El factorial de "<<numero<<" es: "<<result<<endl;
}