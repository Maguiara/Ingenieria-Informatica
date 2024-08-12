#include <iostream>
#include <string>
#include <cctype>

void CambiarLetras(std::string cadena_usuario) {
    for (char& c : cadena_usuario) {
        if (isalpha(c)) {
            (c >= 'A' && c <= 'Z') ? c += 32 : c -= 32;
        }
    }
    std::cout << cadena_usuario << std::endl;
}




int main () {
    std::string cadena_usuario;
    std::cin >> cadena_usuario;
    CambiarLetras(cadena_usuario);
}
