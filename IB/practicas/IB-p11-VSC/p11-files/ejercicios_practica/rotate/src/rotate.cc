/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez @alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Fichero con la definicion de las funciones para el main
*/

#include <iostream>
#include <string>
#include <fstream>
#include "rotate.h"

std::string RotarVocales (const std::string& palabra) {
    std::string palabra_rotada{palabra};
    for (int i = 0; i < palabra.length(); i++) {
        if (palabra[i] == 'a') {
            palabra_rotada[i] = 'e';
        }
        if (palabra[i] == 'e') {
            palabra_rotada[i] = 'i';
        }
        if (palabra[i] == 'i') {
            palabra_rotada[i] = 'o';
        }
        if (palabra[i] == 'o') {
            palabra_rotada[i] = 'u';
        }
        if (palabra[i] == 'u') {
            palabra_rotada[i] = 'a';
        }
    }
       
    return palabra_rotada;
}

void RotarVocalesFichero (std::string& fichero_entrada) {
    std::ifstream fichero_entrada_stream{fichero_entrada};
    std::ofstream fichero_salida_stream{"rotado.txt"};
    std::string palabra;
    while (fichero_entrada_stream >> palabra) {
        fichero_salida_stream << RotarVocales(palabra) << " ";
    }
    fichero_entrada_stream.close();
    fichero_salida_stream.close();
}

