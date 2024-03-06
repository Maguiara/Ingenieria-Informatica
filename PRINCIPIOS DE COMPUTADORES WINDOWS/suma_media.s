

    .data

cadpet: .asciiz "Ingerese los numeros que quiera sumar separados por un retorno de carro (ingrese 0 para salir)\n"
cadres: .asciiz "La suma media es: "
cadfin: .asciiz "\nFin del programa\n"


    .text
main:

    #Mostramos por pantalla el mensaje pidiendo los numeros

    li $v0, 4
    la $a0, cadpet
    syscall

peticion_numeros: 
    #Pedimos los numeros
    li $v0, 5
    syscall
    move $t0, $v0

    #Salimos del bucle en caso de que el usuario introduzca un 0
    beqz $t0, calcular_media

    li $t1, 1
    add $s0, $s0, $t0 #numeros a sumar
    add $s1, $s1, $t1 #contador de numeros introducidos
    j peticion_numeros


calcular_media:

    #Convertimos los numeros sumados a flotante
    mtc1 $s0, $f0
    cvt.s.w $f2, $f0

    #Convertimos el contador de numeros introducidos a flotante
    mtc1 $s1, $f24
    cvt.s.w $f28, $f24

    div.s $f30, $f22, $f28

imprimir_resultado:

    li $v0, 4
    la $a0, cadres
    syscall

    li $v0, 2
    mov.s $f12, $f30
    syscall

fin_programa:

    li $v0, 4
    la $a0, cadfin
    syscall 

    li $v0, 10
    syscall