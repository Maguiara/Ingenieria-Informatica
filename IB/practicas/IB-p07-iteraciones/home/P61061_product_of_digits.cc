/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P61061_products_of_digits.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 29th 2023
 * @brief This is a program that reads several numbers,
 * and for each one prints the products of its digits,
 * and the products of the digits os the last product.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P61061_en
 */

#include <iostream>
  int GetProduct(int number) {
    int product{1};
    if (number == 0) {
        return product = 0;
    }
    while(number != 0) {
        product *= (number % 10);
        number /= 10;
    }
    return product;
}

int main() {
    int num{0};
    while (std::cin >> num) {
        int product_of_digits{GetProduct(num)};
        std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << 
        std::endl;
        while (product_of_digits >= 10) {
            num = product_of_digits;
            product_of_digits = GetProduct(num);
            std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << 
            std::endl;
        }
        std::cout << "----------" << std::endl;
    }
    return 0;
}
