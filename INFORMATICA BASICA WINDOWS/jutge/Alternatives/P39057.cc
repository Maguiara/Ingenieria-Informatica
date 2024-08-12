#include <iostream> 
#include <string>
#include <iomanip>
#include <cmath>


int main () {
    int iteraciones;
    std::string tipo_figura;
    double area = 0.0, longitud, ancho, radio;
    std::cin >> iteraciones;

    for(int i = 0; i < iteraciones; i++) {
        std::cin >> tipo_figura;
        if (tipo_figura == "rectangle") {
            std::cin >> longitud >> ancho;
            area = longitud * ancho;            
            std::cout << std::fixed << std::setprecision(6) << area << std::endl;
        }
        if (tipo_figura == "circle") {
            std::cin >> radio;
            area = M_PI * radio * radio;
            std::cout << std::fixed << std::setprecision(6) << area << std::endl; 
        }
    }
}