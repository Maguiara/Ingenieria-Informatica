/**
 * AUTOR: Marco Aguiar Álvarez
 * FECHA: 06/02/24 
 * EMAIL: alu0101620961@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *                "C++ Programming Style Guidelines"
 *             https://geosoft.no/development/cppstyle.html
 */

#include "rational_t.hpp"

/**
 * @brief Constructor parametrizado de la clase, en caso de no recibir parametros se trata del constructor por defecto
 * @param n numerador del numero racional introducido
 * @param d denominador del numero racional introducido por el usuario
*/
rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}


/**
 *@brief getter del numerador
*/
int rational_t::get_num() const {
  return num_;
}


/**
 * @brief getter del denominador
*/
int rational_t::get_den() const {
  return den_;
}


/**
 * @brief setter del parametro numerador 
 */  
void rational_t::set_num(const int n) {
  num_ = n;
}


/**
 * @brief setter del denominador
 */  
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}


/**
 * @brief Metodo que se encarga de devolver el valor del numero racional
 * @return devuelve un double con el valor del numero racional introducido
*/
double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// comparaciones

/**
 * @brief Metodo para comparar dos objetos de la calse rational
 * @param r objeto de la clase racional
 * @param precision Error que se comete en el calculo de la precision
 * @return Devuelve si un objeto es igual a otro o no.
*/
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  return (fabs(value() - r.value()) < precision);
}


/**
 * @brief Metodo para comparar dos objetos de la calse rational
 * @param r objeto de la clase racional
 * @param precision Error que se comete en el calculo de la precision
 * @return Devuelve si un objeto es mayor que otro o no.
*/
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return (value() - r.value() > precision);
}


/**
 * @brief Metodo para comparar dos objetos de la calse rational
 * @param r objeto de la clase racional
 * @param precision Error que se comete en el calculo de la precision
 * @return Devuelve si un objeto es menor que otro o no.
*/
bool rational_t::is_less(const rational_t& r, const double precision) const {
  return (r.value() - value() > precision);
}


 //operaciones

 /**
  * @brief Metodo para operar con los objetos de la clase racional
  * @param r Objeto de la calse rational
  * @return devuelve un objeto de la clase rational que coincide con la suma de otros 2
 */
rational_t rational_t::add(const rational_t& r) {
  int numerador_suma = (get_num() * r.get_den()) + (get_den() * r.get_num());
  int denominador_suma = get_den() * r.get_den();
  int mcd = gcd(numerador_suma, denominador_suma);
  return rational_t(numerador_suma / mcd, denominador_suma / mcd);
}


/**
  * @brief Metodo para operar con los objetos de la clase racional
  * @param r Objeto de la calse rational
  * @return devuelve un objeto de la clase rational que coincide con la resta de otros 2
 */
rational_t rational_t::substract(const rational_t& r) {
  int numerador_resta =  (get_num() * r.get_den()) - (get_den() * r.get_num()); 
  int denominador_resta = get_den() * r.get_den();
  int mcd = gcd(numerador_resta, denominador_resta);
  return rational_t(numerador_resta / mcd, denominador_resta / mcd);
}


/**
  * @brief Metodo para operar con los objetos de la clase racional
  * @param r Objeto de la calse rational
  * @return devuelve un objeto de la clase rational que coincide con la multiplicaion de otros 2
 */
rational_t rational_t::multiply(const rational_t& r) {
  int mcd = gcd(get_num(), get_den());
  return rational_t((get_num() * r.get_num()) / mcd , (get_den() * r.get_den()) / mcd);
}


/**
  * @brief Metodo para operar con los objetos de la clase racional
  * @param r Objeto de la calse rational
  * @return devuelve un objeto de la clase rational que coincide con la division de otros 2
 */
rational_t rational_t::divide(const rational_t& r) {
  int mcd = gcd(get_num(), get_den());
  return rational_t((get_num() * r.get_den()) / mcd, (get_den() * r.get_num()) / mcd);
}

// E/S

/**
 * @brief Metodo para escribir por pantalla encargandose de que la fraccion sea irreducible 
 * y en caso de que ambos numeros sean negativos dejarlos positivos
 * @param os Flujo de salida por pantalla
*/
void rational_t::write(ostream& os)  {
  int mcd = gcd(get_num(), get_den());
  if (get_num() < 0 && get_den() < 0) {
    os << fabs(get_num()) / fabs(mcd) << "/" << fabs(get_den()) / fabs(mcd) << " = " << value() << endl; 
  } else {
    os << get_num() / fabs(mcd) << "/" << get_den() / fabs(mcd) << " = " << value() << endl;
  }
}


/**
 * @brief Metodo para leer desde el teclado del usuario un numerador y denominador para un numero racional
 * @param is flujo de entrada 
*/
void  rational_t::read(istream& is) {
  cout << "Introduzca un numerador ";
  is >> num_;
  cout << "Introduzca un denominador ";
  is >> den_;
  assert(den_ != 0);
}


/**
 * @brief Metodo que encuentra el mcd de un objeto de la clase racional con el fin de encontrar la fraccion irreducible
 * @param n numerador del objeto
 * @param d denominador del objeto
 * @return devuelve el maximo comun divisor entre numerador y denominador
*/
int rational_t::gcd(int n, int d) {
  while (d != 0) {
    int temp = d; 
    d = n % d;
    n = temp;
  }
  return n;
}

// PRACTICA VIERNES 


/**
 * @brief Metodo que calcula la raiz cuadrada del denominador
 * @param r objeto de la clase rational_t
 * @return devuelve un objeto de la clase racional con la raiz cuadrada del denominador 
*/

void rational_t::squared_den() {
  double raiz_cuadrada = get_num() / sqrt(get_den()); 
  cout << get_num() << "/√" << get_den() << " = " << raiz_cuadrada << endl;   
}
