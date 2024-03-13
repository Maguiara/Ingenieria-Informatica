/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Fichero que incluye la definicion de funciones que se utilizaran en el main.
 * 
 */

#include <iostream>
#include <string>
#include <cstdlib>

void PrintProgramPorpouse() {
    std::cout << "Este programa cuenta el numero de vocales y consonantes de un fichero de texto" << std::endl;
    std::cout << "e imprime por pantalla la palabra con mas vocales y consonantes" << std::endl;
}

void Usage(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << argv[0] << ": Falta un fichero de texto como parametro" << std::endl;
        std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
        exit(EXIT_SUCCESS);
    }
    std::string parameter{argv[1]};
    if (parameter == "--help") {
        std::cout << "Este programa cuenta el numero de vocales y consonantes de un fichero de texto" << std::endl;
        std::cout << "Modo de uso: " << argv[0] << " fichero_entrada" << std::endl;
        exit(EXIT_SUCCESS);
    }
}