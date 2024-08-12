#include <iostream>


int main () {

    int dia, mes, anyo;
    while (std::cin >> dia >> mes >> anyo) {
        if ((dia <= 0 || dia > 31) || (mes <= 0 || mes > 12) || (anyo < 1800 || anyo > 9999)) {
            std::cout << "Incorrect Date" << std::endl;
        } else {
            switch (mes) {
                case 2:
                    if ( (anyo % 400 == 0 || anyo % 4 == 0 && anyo % 100 != 0)) {
                        (dia > 29) ? std::cout << "Incorrect Date" << std::endl : std::cout << "Correct Date" << std::endl;
                    } else {
                        (dia > 28) ? std::cout << "Incorrect Date" << std::endl : std::cout << "Correct Date" << std::endl;
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    (dia > 30) ? std::cout << "Incorrect Date" << std::endl : std::cout << "Correct Date" << std::endl;
                    break;
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                default:
                    std::cout << "Correct Date" << std::endl; 
                    break;
            }
        }
    }
}
