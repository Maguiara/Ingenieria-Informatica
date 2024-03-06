.data 

str_numerador: .asciiz "Ingrese un numerador (flotante): "
str_denominador: .asciiz "Ingrese un denominador (flotante): " 
str_resultado: .asciiz "El resultado de la division es: "
str_error_indeterminacion: .asciiz "ERROR El resultado es una indeterminacion."
str_error_indeterminacion_positiva: "ERROR la indeterminacion tiende a +infinito"
str_error_indeterminacion_negativa: .asciiz "ERROR La indeterminacion tiende a -infinito"
num_cero: .float 0.0

.text
main:
    #Pedimos un numerador
    li $v0, 4
    la $a0, str_numerador
    syscall

    #Leemos el numerador del usuario
    li $v0, 6
    syscall
    move.s $f20, $f0

    #Pedimos un denominador
    li $v0, 4
    la $a0, str_denominador
    syscall

    #Leemos deniminador 
    li $v0, 6
    syscall
    move.s $f22, $f0

    #cargamos el registro 0 para comparar

    l.s $f4, num_cero
    #comprobamos que el denominador no sea 0
    c.eq.s $f22, $f4
    bc1t comprobaciones

division_normal:

    #operamos
    div.s $f24, $f20, $f22

    #Imprimir resultado
    li $v0, 4
    la $a0, str_resultado
    syscall
    li $v0, 2
    move.s $f12, $f24
    syscall

    j fin_programa #Evitamos el resto de comparaciones


comprobaciones: 
    #Comprobamos que el denominador sea 0 tambien
    c.eq.s $f20, $f4
    bc1t indeterminacion

    #Comprobamos si el numerador es positivo o negativo
    c.lt.s $f20, $f4
    bc1t infinito_negativo

infinito_positivo:
    #imprimimos por pantalla el error de la indeterminacion a +infinito
    li $v0, 4
    la $a0, str_error_indeterminacion_positiva
    syscall 

    j fin_programa

infinito_negativo:
    #imprimimos por pantalla el error de la indeterminacion a -infinito
    li $v0, 4
    la $a0, str_error_indeterminacion_negativa
    syscall 

    j fin_programa

indeterminacion:
    #imprimimos por pantalla el error de la indeterminacion
    li $v0, 4
    la $a0, str_error_indeterminacion
    syscall

    j fin_programa


fin_programa: 
    li  $v0, 10
    syscall