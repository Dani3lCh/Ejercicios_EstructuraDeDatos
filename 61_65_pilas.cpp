#include <iostream>


/*
61.Implementar pila con arreglo: Crear una estructura de pila usando un arreglo y
variables de control.
62.Función push para pila: Agregar un elemento a la pila (validar si está llena).
63.Función pop para pila: Eliminar y retornar el elemento superior de la pila
(validar si está vacía).
64.Verificar pila vacía: Función que retorne verdadero si la pila no tiene elementos.
65.Verificar pila llena: Función que retorne verdadero si la pila alcanzó su
capacidad máxima.
*/


using namespace std;

struct Pila
{
  int arreglo[5];
  int tope = -1;

  void push(int valor)
  {
    if (tope < 4)
    {
      tope++;
      arreglo[tope] = valor;

      cout << "Elemento insertado: " << valor << endl;
    }
    else
    {
      cout << "La pila está llena." << endl;
    }
  }

  int pop()
  {
    if (tope >= 0)
    {
      int valor = arreglo[tope];
      tope--;
      return valor;
    }
    else
    {
      cout << "La pila está vacía." << endl;
      return -1;
    }
  }

  bool estaVacia()
  {
    return tope == -1;
  }

  bool estaLlena()
  {
    return tope == 4;
  }
};

int main()
{
  Pila Mipila;

  cout << "Pila vacia: " << (Mipila.estaVacia() ? "Si" : "No") << endl;

  // insercion de elementos
  Mipila.push(10);
  Mipila.push(20);
  Mipila.push(30);
  Mipila.push(40);
  Mipila.push(50);

  cout << "Pila llena: " << (Mipila.estaLlena() ? "Si" : "No") << endl;
  Mipila.push(60); 

  // Retiro de elementos de la pila
  while (!Mipila.estaVacia())
  {
    cout << "Elemento retirado: " << Mipila.pop() << endl;
  }

  cout << "Pila vacia: " << (Mipila.estaVacia() ? "Si" : "No") << endl;
  Mipila.pop();

  return 0;
}
