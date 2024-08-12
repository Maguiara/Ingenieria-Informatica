#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main () {
    double numero_evaluar, exponente = 0.0, evaluar = 0.0, z = 0.0;
    std::cin >> numero_evaluar;
    while (std::cin >> z) {
        evaluar += z * pow(numero_evaluar, exponente);
        exponente++;
    }
    std::cout << std::fixed << std::setprecision(4) << evaluar << std::endl;
    return 0;
}