//Ejercicio 3 20 05 2024
/**
 * EJERCICIO 3. Impleméntese tres métodos constantes para imprimir el contenido de una lista simplemente enlazada:

a) un método recursivo template <class T> void sll_t<T>::write_reverse(sll_node_t<T>* node, ostream& os) const que imprima la lista en orden inverso.

b) un método recursivo template <class T> void sll_t<T>::write_direct(sll_node_t<T>* node, ostream& os) const que imprima la lista en orden directo

c) un método iterativo template <class T> void sll_t<T>::write_reverse(ostream& os) const  que imprima la lista enlazada en orden inverso.

Los métodos recursivos 1 y 2 requieren  que se implemente también un método adicional de llamada.
 */


//Ejercicio 3 13 06 2019
/**
 * 3. Dada la clase vector_t<double>, implementar los siguientes apartados.

(a) (0.5) Producto escalar iterativo entre un vector invocante y otro pasado por parámetro, siempre y cuando los dos vectores sean del mismo tamaño.

(b) (1.5) Producto escalar recursivo entre un vector invocante y otro pasado por parámetro, siempre y cuando los dos vectores sean del mismo tamaño.

double vector_t<double>::scal_prod_r(const vector_t<double>& b, int i = 0)
 */



//Ejercicio 5 13 06 2019

//5. (1.5) Considérese la clase sll_t. Impleméntese un procedimiento no recursivo que imprima los elementos 
//de la lista simplemente enlazada en enteros, cuyos valores sean par, en orden inverso. Con este fin se utilizará 
//una estructura de tipo pila en la que se almacenarán los datos de la lista enlazadas.

//Ejercicio 5 05 07 2019

/**
 * 5. La función que calcula el número de pasos totales en el problema de las Torres de Hanoi se define como:

(a) Desarrollar la función recursiva: unsigned int hanoi(unsigned int i)
 */


//Ejercicio 2 05 07 2023

/**
 * EJERCICIO 2. Dado un objeto pw de la clase vector_t<char> de longitud n que almacenará diferentes contraseñas (passwords), y el siguiente alfabeto:
 * const char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int ALPHABET_size = (int)sizeof(ALPHABET) - 1;

se pide desarrollar un procedimiento recursivo en C++ con la siguiente cabecera:

void hacking(vector<char>& pw, const int i = 0)
 */