
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez @alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Crea vectores con el contenido del fichero
*/
#include <fstream>
#include <vector>
#include <string>

/**
 * @brief Funcion que lee un archivo de texto y guarda en un vector solo aquellas cadenas que sean numeros
 * @param[in] nombre_fichero nombre del fichero que se le pasa como referencia constaste
 * @return Devuelve el vector de cadenas que sean numer
*/

std::vector<string> LeerNumerosFichero (const std::string& nombre_fihcero) {
  std::ifstream input_file(nombre_fichero);
  if (!input_file.is_open()) {
    std::cout << "No se pudo abrir el fichero" << std::endl;
    return;
  }
  std::string contenido;
  std::vector<string> numeros;
  while (input_file >> contenido) {
    if (contenido != '+' && contenido != '-' && contenido != 'x' && contenido != ':') {
      numeros.push_back(contenido); 
    }
  }
  input_file.close();
  return numeros;
}

/**
 * @brief Funcion que lee de un archivo de texto y guarda en un vector los caracteres que coinciden con los operadores de la suma
 * @param[in] nombre_fichero Nombre del fichero que se ve a leer 
 * @return Devuelve un vector de cadenas que sean operadores matematicos
*/

std::vector<char> LeerOperadoresFichero (const std::string& nombre_fichero) {
  std::ifstream input_file(nombre_fichero);
  if (!input_file.is_open()) {
    std::cout << "No se pudo abrir el fichero" std::endl;
  }
  std::string contenido;
  std::vector<char> operadores;
  while (input_file >> contenido) {
    if (contenido == '+' || contenido == '-' || contenido == 'x' || contenido == ':') {
      operadores.push_back(contenido);
    }
  }
  input_file.close()
  return operadores;
}
