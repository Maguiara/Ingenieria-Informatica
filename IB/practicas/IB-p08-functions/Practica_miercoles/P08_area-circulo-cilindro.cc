/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 08 23
  * @brief El programa calcula el area de un circulo y el volumen de un cilindro 
	* 			 con el resultado de ese area.
  *  @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */





#include <iostream>

/** Funcion que calcula el area del circulo
	* @Param[in] recibe el valor introducido por el usuario y lo usa como radio
	* @return devuelve el area del circulo de radio r 
*/ 
double AreaCirculo(const double radio) {
	const double pi{3.141592653589793};
	double area_circulo = pi * (radio * radio);
	return area_circulo;
}
/**Funcion que calcula el volumen de un cilindro en base al area calculada en la funcion anterior.
	* @Param[radio] recibe el radio con el que llama a la funcion que calcula el area
	* @Param[altura] recibe un valor que usara como altura para calcular el volumen.
	* @return devuelve el volumen de un cilindro de radio r y altua h.
*/ 
double VolumenCilindro(const double radio,const double altura) {
	double area_circulo = AreaCirculo(radio);
	double volumen_cilindro = altura * area_circulo;
	return volumen_cilindro;
}

int main () {
	double radio, altura;
	std::cin >> radio >> altura;
	double volumen_cilindro = VolumenCilindro(radio, altura);
	std::cout << volumen_cilindro << std::endl;
	return 0;
}
