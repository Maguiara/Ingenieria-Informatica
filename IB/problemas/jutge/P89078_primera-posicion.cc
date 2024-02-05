/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @autor Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 28/11/2023
 * 
*/

#include <iostream>
#include <cstdlib>


int main() {
    int number;
    int position = 0;
    bool found = false;

    while (std::cin >> number) {
        position++;
        if (number % 2 == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "The first even number is at position: " << position << std::endl;
    } else {
        std::cout << "No even number was found." << std::endl;
    }

    return 0;
}