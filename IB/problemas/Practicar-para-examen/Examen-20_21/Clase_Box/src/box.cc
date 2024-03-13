/**
 * 
 * 
*/

#include <iostream>
#include "box.h" 


std::istream& operator>>(std::istream& in, Box& caja_usuario) {
  in >> caja_usuario.length_ >> caja_usuario.breath_ >> caja_usuario.height_;
  return in;
}

std::ostream& operator<<(std::ostream& out, const Box& caja_usuario) {
  out << caja_usuario.length_ << " " << caja_usuario.breath_ << " " << caja_usuario.height_;
  return out;
}

bool Box::operator==(const Box& caja_usuario2) {
  if (length_ == caja_usuario2.length_ && breath_ == caja_usuario2.breath_ && height_ == caja_usuario2.height_ ) {
    return true;
  }
  return false;
}