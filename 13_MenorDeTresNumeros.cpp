#include <iostream>

using namespace std;

int main(){

  int num1, num2, num3;
  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;
  cout << "Ingrese el tercer numero: ";
  cin >> num3;

  if(num1 < num2 && num1 < num3){
    cout << "El menor de los tres numeros es: " << num1 << endl;
  } else if(num2 < num1 && num2 < num3){
    cout << "El menor de los tres numeros es: " << num2 << endl;
  } else {
    cout << "El menor de los tres numeros es: " << num3 << endl;  
  }
}
