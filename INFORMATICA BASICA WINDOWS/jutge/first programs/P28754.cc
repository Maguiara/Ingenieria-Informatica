#include <iostream>


int main() {
    int numero;
    std::cin >> numero;

    if (numero == 0) std::cout << numero;
    while (numero > 0) {
        int digito_binario = numero % 2;
        std::cout << digito_binario;
        numero /= 2;
    }
    std::cout << std::endl;
    return 0;
}