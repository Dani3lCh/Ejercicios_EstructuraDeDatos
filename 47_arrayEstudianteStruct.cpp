/*47.Arreglo de estudiantes: Declarar un arreglo de structs para almacenar datos de
múltiples estudiantes.*/

#include <iostream>
using namespace std;

struct Estudiante
{
  string nombre;
  string carnet;
  string carrera;
  float promedio;
};


int main(){
  Estudiante estudiantes[3];
  //estudiante 1
  estudiantes[0].nombre = "Daniel Juarez";
  estudiantes[0].carnet = "20129088012";
  estudiantes[0].carrera = "Informatica Administrativa";
  estudiantes[0].promedio = 87.2; 

  //estudiante 2
  estudiantes[1].nombre = "Juan Perez";
  estudiantes[1].carnet = "20129088013";
  estudiantes[1].carrera = "Ingenieria de Sistemas";
  estudiantes[1].promedio = 90.5;

  //estudiante 3
  estudiantes[2].nombre = "Maria Lopez";
  estudiantes[2].carnet = "20129088014";
  estudiantes[2].carrera = "Administracion de Empresas";
  estudiantes[2].promedio = 85.0;

  cout << "Datos de los estudiantes:" << endl;
  for(int i = 0; i < 3; i++){
    cout << "Estudiante " << i + 1 << ":" << endl;
    cout << "Carnet: " << estudiantes[i].carnet << endl;
    cout << "Nombre: " << estudiantes[i].nombre << endl;
    cout << "Carrera: " << estudiantes[i].carrera << endl;
    cout << "Promedio: " << estudiantes[i].promedio << endl;
    cout << endl;
  }
  return 0;
}