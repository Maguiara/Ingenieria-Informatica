/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Informatca Basica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 090/12/23
 * @brief Archivo con la declaracion de la clase Poinr2D y sus metodos
 * 
*/

#ifndef POINT2D_H
#define POINT2D_H

void Usage(int argc, char *argv[]);
class Point2D { 

  public:
    Point2D();
    Point2D(const double componente_x, const double componente_y);
    double componente_x() const { return componente_x_; } //getter
    double componente_y() const { return componente_y_; } //getter
    void Show() const;
    void Move(const double delta_x, const double delta_y);
    double Distance(const Point2D &otro_punto) const;
    Point2D Middle(const Point2D &otro_punto) const; 

  private:
    double componente_x_{0};
    double componente_y_{0};
};

#endif