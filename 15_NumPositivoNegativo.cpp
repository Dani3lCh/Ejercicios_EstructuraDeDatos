#include <iostream>
using namespace std;
/*Clasificar un número ingresado en una de
estas categorías: positivo, negativo o cero.*/

int main(){

  bool terminar = false;


  do{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0)
    {
      cout << "El número " << numero << " es positivo." << endl;
    }
    else if (numero < 0)
    {
      cout << "El número " << numero << " es negativo." << endl;
    }
    else
    {
      cout << "El número es cero." << endl;
    }
  }
  while(!terminar);

return 0;
}
