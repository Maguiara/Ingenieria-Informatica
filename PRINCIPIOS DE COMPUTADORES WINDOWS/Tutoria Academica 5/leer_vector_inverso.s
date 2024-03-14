# Depende del tipo de elemento que guarde el vector se multiplicara su indice por el tamaño que ocupa en memoria
# Ejemplo: si el vector guarda enteros de 4 bytes, el indice se multiplicara por 4
# Si el vector guarda flotantes de 8 bytes, el indice se multiplicara por 8

# Ejemplo de programa que imprime un vector en orden normal e inverso

    .data

msg: .asciiz "Vector original: "
msg_inverso: .asciiz "Vector inverso: "
new_line: .asciiz " \n" 
space: .asciiz " "


vector: .word 7, 4, 6, 1, 8, 3, 2, 8, 5, 9

    .text

main:
    #Imprimimos el vector original
    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 4
    la $a0, new_line
    syscall

datos_vector_normal:
    la $s0, vector #Direccion base del vector 
    move $t0, $zero #Indice para iterar sobre el vector, actualmente a 0
    li $t1, 4 #Tamaño de los elementos del vector
    li $t2, 10 #Tamaño del vector

imprimir_vector:

    mul $t3, $t0, $t1 #Contiene la direccion relativa (indice * tamaño)
    addu $t3, $s0, $t3 #Contiene la direccion del elemento
    lw $t3, 0($t3) #Contiene el elemento 
    addi $t0, 1 #Calculamos el siguiene indice

    #Imprimimos el numero calculado 
    li $v0, 1
    move $a0, $t3
    syscall

    li $v0, 4
    la $a0, space
    syscall

    #Comparamos el indice con el tamaño del vector 
    blt $t0, $t2, imprimir_vector


datos_vector_inverso:

    li $v0, 4
    la $a0, new_line
    syscall


    li $v0, 4
    la $a0, msg_inverso
    syscall

    li $v0, 4
    la $a0, new_line
    syscall

   li $t0, 9 # Actualizamos el indice para que empiece por el final

imprimir_inverso:

    mul $t3, $t0, $t1 #Contiene la direccion relativa (indice * tamaño)
    addu $t3, $s0, $t3 #Contiene la direccion del elemento
    lw $t3, 0($t3) #Contiene el elemento 
    addi $t0, -1 #Calcula el indice anterior 

    li $v0, 1
    move $a0, $t3
    syscall

    li $v0, 4
    la $a0, space
    syscall

    bltz $t0, fin_programa
    j imprimir_inverso

fin_programa:

    li $v0, 10
    syscall