/**
 * Universidad de La Laguna
 * Escuela superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/23
 * @brief Declaracion de la clase cilindro con sus metodos y atributos.
*/

#ifndef P12_CILINDRO_H
#define P12_CILINDRO_H

/**
 * @class Cilindro
 * @brief Declaracion de la clase cilindro y sus atributos
*/
class Cilindro {
  public:
    Cilindro() = default;
    Cilindro (const double altura, const double radio);
    double altura() const { return altura_; }
    double radio() const { return radio_; }
    double SuperficieCilindro(const Cilindro& cilindro_usuario) const;
    double VolumenCilindro(const Cilindro& cilindro_usuario) const;

  private:
    double altura_{0.0};
    double radio_{0.0};
};

#endif 