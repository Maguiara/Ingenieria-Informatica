/**
 * 
*/
#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include <string>

void PrintProgramPorpouse();
void Usage (int argc, char *argv[]);

enum Color {

  blanco,
  negro,
  rojo,
  azul,
  verde,

};

class Punto {
  public:
    Punto() : coordenada_x_{0}, coordenada_y_{0} {} //DEFAULT
    Punto(const double coordenada_x, const double coordenada_y) : coordenada_x_{coordenada_x}, coordenada_y_{coordenada_y} {} //Constructor con parametros
    double coordenada_x() const { return coordenada_x_; } //getter
    double coordenada_y() const { return coordenada_y_; } //getter

  private:
    double coordenada_x_{0};
    double coordenada_y_{0};
};


class Circulo {
  public:
    Circulo();
    Circulo(const Punto& centro, const double radio,const Color color); 
    Punto centro() const { return centro_; } //getter
    double radio() const { return radio_; } //getter
    Color color() const { return color_; } //getter
    double Area(const double radio) const;
    double Perimetro(const double radio) const;
    void Print(const Circulo& circulo) const;
    bool EsInterior(const Punto& un_punto, const Circulo& circulo) const; 

  private:
    Punto centro_;
    double radio_{0};
    Color color_{blanco};
};

#endif