/**
 * 
 * 
*/
#include <fstream>
#include <vector>
#include <set>
#include "DFA.h"

struct Estado {
    unsigned id;
    bool aceptacion;
    std::vector<std::pair<char, unsigned>> transiciones;
};

void ProcesarDFA(const std::string& fichero_entrada, const std::string& fichero_de_salida) {
    std::ifstream input{fichero_entrada};
    std::ofstream output{fichero_de_salida};
    unsigned total_estados, estado_arranque;
    input >> total_estados >> estado_arranque;

    std::vector<Estado> estados(total_estados);
    std::set<unsigned> estados_aceptacion;
    for (unsigned i = 0; i < total_estados; ++i) {
      Estado& estado = estados[i];
      input >> estado.id;
      unsigned aceptacion;
      input >> aceptacion;
      estado.aceptacion = aceptacion == 1;
      if (estado.aceptacion) {
        estados_aceptacion.insert(estado.id);
      }
      unsigned total_transiciones;
      input >> total_transiciones;
      for (unsigned j = 0; j < total_estados; ++j) {
        char simbolo;
        unsigned estado_destino;
        input >> simbolo >> estado_destino;
        estado.transiciones.push_back({simbolo, estado_destino});
      }
    }
    output << "|Q| = " << total_estados << std::endl;
    output << "Q0 = " << estado_arranque << std::endl;
    output << "F = {";
    for (auto it = estados_aceptacion.begin(); it != estados_aceptacion.end(); ++it) {
      if (it != estados_aceptacion.begin()) {
        output << ", ";
      }
      output << *it;
    }
    output << "}" << std::endl;

    for (const Estado& estado : estados) {
        for (const auto& trancisiones : estado.transiciones) {
            output << "delta(" << estado.id << ", " << trancisiones.first << ") -> " << trancisiones.second << std::endl;
        }
    }
}