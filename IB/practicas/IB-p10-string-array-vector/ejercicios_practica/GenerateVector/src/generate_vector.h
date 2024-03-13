/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <vector>
#include <cstdlib>
#include <time.h>


std::vector<double> GenerateVector(const int size, const double lower, const double upper);
double ReduceSum (const std::vector<double>& vector1);
void CalcularMaximoMinimoValorMedio (const std::vector<double>& vector1, double suma_componentes, double& maximo, double& minimo, double& valor_medio);
std::vector<double> ConcatenarVectores (std::vector<double>& vector1, std::vector<double>& vector2);
