#include <iostream>
#include <string>

struct Equipo {
  std::string nombre;
  int partidosJugados;
  int partidosGanados;
  int partidosEmpatados;
};
struct Equipo_clasificacion {
  std::string nombre;
  int puntos;
};


void CalcularClasificacion(Equipo Liga[N_Equipos], Equipo_clasificacion Clasificacion[N_Equipos]) {
  for (int i = 0; i < N_Equipos; i++) {
    Clasificacion[i].nombre = Liga[i].nombre;
    Clasificacion[i].puntos = Liga[i].partidosGanados * 3 + Liga[i].partidosEmpatados;
  }
}


int main () {
  Equipo Liga[22]; // Declaración de un array de 22 equipos
}