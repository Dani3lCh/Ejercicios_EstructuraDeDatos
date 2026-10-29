/*46.Struct para estudiante: Definir un struct con campos: nombre, carné, carrera y
promedio.*/

#include <iostream>

using namespace std;

struct Estudiante
{
  string nombre;
  string carnet;
  string carrera;
  float promedio;
};

int main()
{

  Estudiante Estudiante1;

  Estudiante1.nombre = "Cesar Chirinos";
  Estudiante1.carnet = "20129088012";
  Estudiante1.carrera = "Informatica Administrativa";
  Estudiante1.promedio = 87.2;

  cout << "Datos del estudiante:" << endl;
  cout << Estudiante1.carnet << endl;
  cout << Estudiante1.nombre << endl;
  cout << Estudiante1.carrera << endl;
  cout << Estudiante1.promedio << endl;
  return 0;
}