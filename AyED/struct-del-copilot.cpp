
const int N_Equipos = 22; // Add the missing constant N_Equipos

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
  Equipo Liga[N_Equipos]; // Declaración de un array de 22 equipos
}