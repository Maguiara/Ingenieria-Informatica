


#include <iostream>
#include <cmath>
#include <iomanip>
#include "raiz-aproximada.h"

int main (int argc, char* argv[]) {
	Usage(argc, argv);
	double numero = std::stod(argv[1]);
	double resultado = CalcularRaizAproximada(numero);
	PrintResult(numero, resultado);
}
