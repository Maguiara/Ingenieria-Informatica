#include <iostream>


int main () {

    int dia, mes, anyo;
    while (std::cin >> dia >> mes >> anyo) {
        if ((dia < 0 || dia > 31) || (mes < 0 || mes > 12) || (anyo < 1800 || anyo > 9999)) {
            std::cout << "Incorrect Date" << std::endl;
        } else if ( mes == 2 && !(anyo % 400 == 0 || anyo % 4 == 0 && anyo % 100 != 0) && dia > 28) {
            std::cout << "Incorrect Date" << std::endl;
        }else {
            switch (mes) {
                case 2:
                    if (dia > 28) {
                        std:: cout << "Incorrect Date" << std::endl;
                    }
                case 4:
                case 6:
                case 9:
                case 11:
                    if (dia > 30) {
                        std:: cout << "Incorrect Date" << std::endl;    
                    }
                    break;
                
            }
            std::cout << "Correct Date" << std::endl; 
        }
    }
}