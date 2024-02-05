/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @autor Marco Aguiar Álvarez
 * @date 28/11/2023
 * @brief Programa con la clase cars 
*/

class Coche {
  public:
  using Caracteristica = std::string;

  Caracteristica getmarca() const {return marca_;}
  Caracteristica getmodelo() const {return modelo_;}
  Caracteristica gettipo_de_vehiculo() const {return tipo_de_vehiculo_;}
  double getprecio() const {return precio_;}

  

  private: 
    Caracteristica marca_;
    Caracteristica modelo_;
    Caracteristica tipo_de_vehiculo_;
    double precio_;
}