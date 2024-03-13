/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Archivo de declaracion de la clase Rectangulo junto a las sobrecargas
*/

#include <string>
#include <iostream>

#ifndef CAR_H
#define CAR_H

/**
 * @brief Clase coche con sobrecargas de los operadores <<, >>, ==
*/
class Car {
  public:
    Car() = default;
    Car(const std::string& model, const std::string& plate, int kilometers) : model_{model}, plate_{plate}, kilometers_{kilometers} {}

    std::string model() const { return model_; }
    std::string plate() const { return plate_; }
    int kilometers() const { return kilometers_; }

    friend std::istream& operator>>(std::istream& in, Car& coche_usuario);
    friend std::ostream& operator<<(std::ostream& out, const Car& coche_usuario);
    bool operator>(const Car& coche_usuario2) const ;

  private: 
    std::string model_{""};
    std::string plate_{""};
    int kilometers_{0};
};

#endif 




