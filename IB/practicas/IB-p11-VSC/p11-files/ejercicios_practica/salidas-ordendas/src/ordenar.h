/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author
 * @date 28/11/2023
 * @brief Este archivo contiene la declaracion del archivo ordenar.cc
 */

#pragma once
std::vector<std::string> ReadWordsFromFile(const std::string& filename, std::set<char>& letters);
void WriteWordsToFile(const std::vector<std::string>& words, char letter);
