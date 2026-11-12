
#include <iostream>
#include <string>
using namespace std;

/*67.Convertir infijo a postfijo: Usar pila para transformar una expresión
matemática infija a postfija.*/

struct Pila
{
  char datos[100];
  int cima;

  Pila()
  {
    cima = -1;
  }

  bool isEmpty()
  {
    return cima == -1;
  }

  bool isFull()
  {
    return cima == 99;
  }

  void push(char valor)
  {
    if (!isFull())
    {
      cima++;
      datos[cima] = valor;
    }
  }

  char pop()
  {
    if (!isEmpty())
    {
      char valor = datos[cima];
      cima--;
      return valor;
    }
    return '\0';
  }

  char peek()
  {
    if (!isEmpty())
    {
      return datos[cima];
    }
    return '\0';
  }
};

// Verificar si es numero o letra
bool esOperando(char c)
{
  return (c >= '0' && c <= '9') ||
         (c >= 'A' && c <= 'Z') ||
         (c >= 'a' && c <= 'z');
}

// Verificar si es operador
bool esOperador(char c)
{
  return c == '+' || c == '-' ||
         c == '*' || c == '/';
}

//prioridad de operadores
int prioridad(char operador)
{
  if (operador == '*' || operador == '/')
  {
    return 2;
  }

  if (operador == '+' || operador == '-')
  {
    return 1;
  }

  return 0;
}

// Convertir infija a postfija
string convertirPostfija(string expresion)
{
  Pila pila;
  string resultado = "";

  for (int i = 0; i < expresion.length(); i++)
  {
    char actual = expresion[i];

    if (actual == ' ')
    {
      continue;
    }

    if (esOperando(actual))
    {
      resultado += actual;
    }

    else if (actual == '(')
    {
      pila.push(actual);
    }

    else if (actual == ')')
    {
      while (!pila.isEmpty() && pila.peek() != '(')
      {
        resultado += pila.pop();
      }

      if (!pila.isEmpty())
      {
        pila.pop();
      }
    }

    else if (esOperador(actual))
    {
      while (!pila.isEmpty() &&
             pila.peek() != '(' &&
             prioridad(pila.peek()) >= prioridad(actual))
      {
        resultado += pila.pop();
      }

      pila.push(actual);
    }
  }

  while (!pila.isEmpty())
  {
    resultado += pila.pop();
  }

  return resultado;
}

int main()
{
  string expresion;

  cout << "=== INFIJA A POSTFIJA ===" << endl;

  cout << "Ingrese una expresion: ";
  getline(cin, expresion);

  cout << "Postfija: "
       << convertirPostfija(expresion) << endl;

  return 0;
}
