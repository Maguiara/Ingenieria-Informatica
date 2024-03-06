# PR1. PRINCIPIO DE COMPUTADORES.
# Autor:
# Fecha ultima modificacion:

	.data

titulo:		.asciiz "\nPR1: Principio de computadores.\n"
pet:		.asciiz "\nIntroduzca maximo error permitido: "
caderr:		.asciiz "\nError: el dato introducido debe cumplir 0.00001 <= dato < 1\n"
cade:		.asciiz "\nNumero e: "
cadnt:		.asciiz "\nNumero de terminos: "
cadfin:		.asciiz "\nPR1: Fin del programa.\n"
value_inf:      .double 0.0001
value_sup:      .double 1.0
	.text
#error = $f20
#e = $f22
#fact = $f24
#numterminos = $f26
#ultimo_termino = $f28

main:

#int main(int argc, char *argv[])
#{
#    double error = 0;
#    double e = 1; // 1/0!
        li.d    $f22, 1.0
#    double fact = 1; // 0!
        li.d   $f24, 1.0
#    double numterminos = 1;
        li.d  $f26, 1.0
#    double ultimo_termino = 1; ; // 1/0!
        li.d   $f28, 1.0
#
#    std::cout << "\nPR1: Principio de computadores.\n";
        li      $v0, 4
        la      $a0, titulo
        syscall
        b		do				# jump to do
        
do:
#    do {    
#        std::cout << "\nIntroduzca maximo error permitido: ";
        li      $v0, 4
        la      $a0, pet
        syscall
#        std::cin >> error;
        li      $v0, 7
        syscall
        mov.d   $f20,$f0                                                                        #debug
#        if (!(error >= 0.00001 && error < 1))
        li.d    $f12, 0.00001
        c.lt.d  $f20, $f12
        bc1t    not_in_range

        li.d    $f14, 1.0
        c.lt.d  $f20, $f14
        bc1f    not_in_range
        b		while				# jump to while
        

#      std::cout << "\nError: el dato introducido debe cumplir 0.00001 <= dato < 1\n";
#      else break;
#    } while (true);
not_in_range:
        li      $v0, 4
        la      $a0, caderr		
        syscall
        b		do				# jump to do
        
while:
#    while (ultimo_termino >= error) {
#        fact *= numterminos;
        mul.d   $f24, $f24, $f26
#        ultimo_termino = 1/fact;
        li.d    $f12, 1.0    # Convertir el valor en $t0 a punto flotante y almacenarlo en $f16
        div.d   $f28, $f12, $f24
#        e += ultimo_termino;
        add.d   $f22, $f22, $f28
#        numterminos++;
        li.d    $f12, 1.0   # Convertir el valor en $t0 a punto flotante y almacenarlo en $f16
        add.d   $f26, $f26, $f12

#    while (ultimo_termino >= error)
        c.lt.d  $f28, $f20
        bc1t    end_while
        b		while				# jump to while
        
#    }
end_while:
#    std::cout <<  "\nNumero e: ";
        li     $v0, 4
        la     $a0, cade
        syscall
#    std::cout << std::fixed << std::setprecision(17) << e;
        li     $v0, 3
        mov.d  $f12, $f22
        syscall
#    std::cout << "\nNumero de terminos: " << int(numterminos);
        li     $v0, 4
        la     $a0, cadnt
        syscall
        li     $v0, 3
        mov.d  $f12, $f26
        syscall
#    std::cout << "\nPR1: Fin del programa.\n";
        li     $v0, 4
        la     $a0, cadfin
        syscall
        li     $v0, 10
        syscall
#    return 0;
#}