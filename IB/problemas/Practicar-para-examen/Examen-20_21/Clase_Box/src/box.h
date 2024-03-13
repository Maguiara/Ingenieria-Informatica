/**
 * 
 * 
*/


#ifndef BOX_H
#define BOX_H
#include <iostream>


class Box {
  public:
    Box() : length_{0}, breath_{0}, height_{0} {}
    Box(const double length, const double breath, const double height) : length_{length}, breath_{breath}, height_{height} {}
    double length() const { return length_; }
    double breath() const { return breath_; }
    double heigth() const { return height_; }
    friend std::istream& operator>>(std::istream& in, Box& caja_usuario);
    friend std::ostream& operator<<(std::ostream& out, const Box& caja_usuario);
    bool operator==(const Box& caja_usuario2);

  private: 
    double length_{0.0};
    double breath_{0.0};
    double height_{0.0};
};

#endif