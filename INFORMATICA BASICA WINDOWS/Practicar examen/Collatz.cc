//Input por linea de comandos
//Output empezando por n y acabaando en 1
// mostrar por pantalla N inicial y las iteraciones


#include <iostream>
#include <cstdlib> //Exit
#include <string>

void Usage(int argc,char *argv[]) {
    if (argc != 2){ 
        std::cout << "Numero de parametros incorrecto. Pruebe " << argv[0] << " --help para mas informacion" << std::endl;
        exit(EXIT_SUCCESS);
    }
    std::string parametro{argv[1]};
    if ( argc == 1 && parametro == "--help"){
        std::cout << " Ingrese un numero natural para conocer su secuencia de collatz " << std::endl;
        exit(EXIT_SUCCESS);
    }
}

void Collatz (int n, int& contador_secuancia) {
    if (n == 1){
        std::cout << n << std::endl;
    } else {
        std::cout << n << " ";
        (n % 2 == 0) ? n /= 2 : n = (n * 3) + 1; 
        contador_secuancia++;
        Collatz(n, contador_secuancia); 
    }
}


int  main(int argc, char* argv[]) {
    Usage(argc, argv);
    int numero_usuario{std::stoi(argv[1])}, contador_secuencia{0};
    Collatz(numero_usuario, contador_secuencia);
    std::cout << "Para el numero " << numero_usuario << " hay " << contador_secuencia << " iteraciones"  << std::endl;
}