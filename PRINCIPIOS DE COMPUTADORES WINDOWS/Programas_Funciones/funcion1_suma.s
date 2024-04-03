    .data

str_intro: .asciiz "Programa que suma numeros con una funcion"
str_suma: .asciiz "La suma de "
str_primer_valor: .asciiz "Introduzca el primer valor" 
str_segundo_valor: .asciiz "Introduzca el segundo valor"
str_salto: .asciiz "\n"
str_simbolo: .asciiz " + "
str_es: .asciiz " es: "


.text
suma:
    add $t0, $a0, $a1
    move $v1, $t0

suma_fin: jr $ra


main: 

    li $v0, 4
    la $a0, str_intro
    syscall

    li $v0, 4
    la $a0, str_salto
    syscall

    li $v0, 4
    la $a0, str_primer_valor
    syscall

    li $v0, 4
    la $a0, str_salto
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    li $v0, 4
    la $a0, str_salto
    syscall

    li $v0, 4
    la $a0, str_segundo_valor
    syscall

    li $v0, 5
    syscall
    move $t1, $v0


    li $v0, 4
    la $a0, str_suma
    syscall

    li $v0, 1
    move $a0, $t0
    syscall 

    li $v0, 4
    la $a0, str_simbolo
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 4
    la $a0, str_es
    syscall

    move $a0, $t0
    move $a1, $t1
    jal suma

    li $v0, 1
    move $a0, $v1
    syscall

    li $v0, 10
    syscall




#// Programa con funciones

#include <iostream>

#int sumaNumeros(int a, int b) {
#return a + b;
#}

#int main() {
  #std::cout << "Suma de numeros\n";
  
  #int i = 4;
  #int j = 5;
  #int suma = sumaNumeros(i, j);
  
  #std::cout << i << " + " << j << " = " << suma << "\n";
#}