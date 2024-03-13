/**
 * 
 * 
*/


#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <string>


class FileManager {
 public:
  FileManager() = default;
  FileManager(const std::string& nombre_archivo) : nombre_archivo_{nombre_archivo} {}
  std::string nombre_archivo() const { return nombre_archivo_; }
  std::string SacarPalabraDelArchivo(const long int indice_usuario);

  private:
  std::string nombre_archivo_{""};
};

#endif