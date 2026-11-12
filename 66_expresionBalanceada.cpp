/*
66.Expresión balanceada: Usar la pila para verificar si paréntesis, corchetes y
llaves están balanceados.
*/


#include <iostream>

using namespace std;

struct Pila
{
  char arreglo[100];
  int tope = -1;

  bool estaVacia()
  {
    return tope == -1;
  }

  bool estaLlena()
  {
    return tope == 99;
  }

  bool push(char simbolo)
  {
    if (estaLlena())
    {
      return false;
    }

    tope++;
    arreglo[tope] = simbolo;
    return true;
  }

  char pop()
  {
    if (estaVacia())
    {
      return '\0';
    }

    char simbolo = arreglo[tope];
    tope--;
    return simbolo;
  }
};


bool estaBalanceada(const char expresion[])
{
  Pila pila;

  
  for (int i = 0; expresion[i] != '\0'; i++)
  {
    char simbolo = expresion[i];
    // Las aperturas se guardan hasta encontrar sus cierres.
    if (simbolo == '(' || simbolo == '[' || simbolo == '{')
    {
      if (!pila.push(simbolo))
      {
        return false;
      }
    }
    else if (simbolo == ')' || simbolo == ']' || simbolo == '}')
    {
      //cierres sin aperturas.
      if (pila.estaVacia())
      {
        return false;
      }

      // El cierre debe corresponder a la apertura mas reciente.
      char apertura = pila.pop();
      if ((simbolo == ')' && apertura != '(') ||
          (simbolo == ']' && apertura != '[') ||
          (simbolo == '}' && apertura != '{'))
      {
        return false;
      }
    }
  
  }

  return pila.estaVacia();
}

int main()
{
  char expresion[101]; // 100 caracteres y un espacio para '\0'.

  cout << "Ingrese una expresion (maximo 100 caracteres): ";
  if (!cin.getline(expresion, 101))
  {
    cout << "No se pudo leer la expresion. Use como maximo 100 caracteres." << endl;
    return 1;
  }

  if (estaBalanceada(expresion))
  {
    cout << "La expresion esta balanceada." << endl;
  }
  else
  {
    cout << "La expresion no esta balanceada." << endl;
  }

  return 0;
}
