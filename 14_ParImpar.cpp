/* Función que reciba un entero y retorne si es par o
impar. */


#include <iostream>

using namespace std; 


bool esPar(int numero){
    return numero % 2 == 0;
}



int main(){
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}
