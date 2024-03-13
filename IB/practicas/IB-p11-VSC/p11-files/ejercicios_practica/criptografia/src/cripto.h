/**
 * 
*/

#pragma once
void EncriptadoXor(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const std::string& key);
void DesencriptadoXor(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const std::string& key);
void EncriptadoCesar(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const int& key);
void DesencriptadoCesar(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const int& key);
