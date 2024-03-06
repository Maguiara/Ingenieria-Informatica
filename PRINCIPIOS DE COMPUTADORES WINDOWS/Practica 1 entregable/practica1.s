#PR1 PRINCIPIOS DE COMPUTADORES
#AUTOR MARCO AGUIAR ALVAREZ
#FECHA 21/02/2024

.data 

str_intro: .asciiz "Introduzca el error maximo permitido (0.0001 <= numero_introducido < 1) "
str_resultado: .asciiz "\nEl resultado de la aproximacion de la serie de e es: \n"
str_resultado_iteraciones: .asciiz "\nPara obtener este resultado se han necestiado estas iteraciones: \n"
str_error: .asciiz "El error introducido se encuentra fuera del rango permitido (0.0001 <= numero_introducido < 1). " 
error_minimo: .float 0.0001
error_maximo: .float 1.0 
resultado_serie_e: .float 1.0
denominador_factorial: .float 1.0
contador_iteraciones: .float 1.0
division_factorial: .float 1.0  


.text 
main:

    #Pedimos al usuario un numero

    li $v0, 4
    la $a0, str_intro
    syscall
    
    #Leemos el numero que introduzca

    li $v0, 6
    syscall
    mtc1 $v0, $f0
    cvt.d.w $f20, $f0

    #Comprobamos que el numero introducido se encuentra dentro del rango permitido
    l.d $f4, error_minimo
    l.d $f6, error_maximo
    c.le.d $f4, $f20
    bc1f error
    c.lt.d $f6, $f20
    bc1f error

    #Operamos con la serie del numero e
    l.d $f8, contador_iteraciones #Inicializamos el contador de iteraciones a 1
    li.d $f10, 1.0  #Inicializamos una variable auxiliar a 1.0
    l.d $f22, resultado_serie_e #Inicializamos resultado de la serie a 1.0
    l.d $f24, denominador_factorial #Inicializamos el denominador del factorial a 1.0
    l.d $f26, division_factorial #Inicializamos el resultado de la division del factorial a 1.0

while:
    
    div.d $f26, $f24, $f26
    add.d $f22, $f22, $f26
    c.lt.d $f26, $f20
    bc1t fin_while
    j factorial


fin_while:

    #Mostramos por pantalla el resultado de la serie de e y el numero de iteraciones necesarias

    li $v0, 4
    la $a0, str_resultado
    syscall

    li $v0, 2
    mov.d $f12, $f22
    syscall

    li $v0, 4
    la $a0, str_resultado_iteraciones
    syscall

    li $v0, 1
    move $a0, $t0
    syscall

    j fin_programa



factorial:

   #Subrutina para calcular el factorial de un numero 
    add.d $f8, $f8, $f10  # Incrementar el contador de iteraciones
    mul.d $f24, $f24, $f8   # Actualizar el factorial
    j while  #saltar al while



error:

    #Mostramos por pantalla un mensaje de error
    li $v0, 4
    la $a0, str_error
    syscall
    j fin_programa


 
fin_programa:

    #Terminamos el programa
    li $v0, 10
    syscall