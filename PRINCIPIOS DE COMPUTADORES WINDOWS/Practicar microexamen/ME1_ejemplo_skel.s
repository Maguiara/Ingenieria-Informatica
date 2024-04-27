# Principio de Computadores. Preparación para el Microexamen
# Operaciones con funciones y direccionamiento indirecto
# Autor: 
# Fecha última modificación: 
#include <iostream>

# const int n1 = 10;
# double v1[n1] = {10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0};
# const int n2 = 5;
# double v2[n2] = {5.5, 4.5, 4.25, 2.5, 2.5 };
# const int n3 = 4;
# double v3[n3] = {7.0, 5.0, 2.0, 1.0};

sizeD = 8
LF = 10
SPACE = 32

    .data
n1:     .word 10
v1:     .double 10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0
n2:     .word 5
v2:     .double 5.5, 4.5, 4.25, 2.5, 2.5
n3:     .word 4
v3:     .double 7.0, 5.0, 2.0, 1.0
cad1:   .asciiz "\nVector con dimension "
cad2:   .asciiz "\nIntentando mezcla con dos vectores ...\n"
cad3:   .asciiz "\nFIN DEL PROGRAMA\n"

    .text

# void printvec(double *v, const int n) {
print_vec:
    addi $sp, $sp, -4
    sw $ra, 0($sp)
    

    # $a0 = longitud vector (n1)
    move $t0, $a0
    # $a1 = direccion del vector (v1)
    move $t1, $a1

    li $t2, 0 #Iterador para el bucle for
#     for (int i = 0; i < n; i++)
    for:
    mul $t3, $t2, sizeD
    addu $t3, $t1, $t3
    l.d $f0, 0($t3)
#         std::cout << v[i] << " ";
    li $v0, 3
    mov.d $f12, $f0
    syscall 
    li $v0, 11
    la $a0, SPACE
    syscall

    addi $t2, $t2, 1
    blt $t2, $t0, for

    for_fin:


#     std::cout << "\n";
    li $v0, 11
    la $a0, LF
    syscall 
#     return;
    lw $ra, 0($sp)
    addi $sp, $sp, 4    
# }
print_vec_fin: jr $ra

# int ordenado(double *v, const int n) {
ordenado:

    move $t0, $a0 #Tamaño del vector
    move $t1, $a1, #Direccion del vector

#     int resultado = 1;
    li $t2, 1 #Resultado que devuelve la funcion
#     int i =   0;
    li $t3, 0 #Iterador 
#     while (i < n-1) {
    sub $t0, $t0, 1
    while:
    bge $t3, $t0, while_fin

    mul $t4, $t3, sizeD
    addu $t4, $t4, $t1
    l.d $f0, 0($t4)
    addi $t5, $t3, 1
    mul $t4, $t5, sizeD
    addu $t4, $t4, $t1
    l.d $f2, 0($t4) 

#         if (v[i+1] >= v[i]) {
    if: 
    c.lt.d $f2, $f0
    bc1t if_fin
#             resultado = 0;
    move $t2, $zero
    if_fin: 
#             break;
    j while_fin

#         }
#         i++;
    add $t3, $t3, 1
    j while
#     }
    while_fin: 
#     return(resultado);
    move $v0, $t2
    lw $ra, 0($sp)
    addi $sp, $sp, 4
# }
ordenado_fin: jr $ra

# void merge(double *v1, const int n1,double *v2, const int n2) {
merge_vec: 
#     int  o1 = ordenado(v1,n1);
    jal ordenado 

#     if (o1 == 0) return;
    beq $v0, $zero, merge_vec_fin
#     int o2 = ordenado(v2,n2);
    jal ordenado 

#     if (o2 == 0) return;
    beq $v0, $zero, merge_vec_fin
#     int i = 0; // índice para recorrer el v1
#     int j = 0; // índice para recorrer el v2
#     while ( ( i < n1) && (j < n2) ) {
#         if (v1[i] >= v2[j]) {
#             std::cout << v1[i] << " ";
#             i++;
#         }
#         else {
#             std::cout << v2[j] << " ";
#             j++;
#         }
#     }
#     while ( i < n1) {
#         std::cout << v1[i] << " ";
#         i++;
#     }
#     while ( j < n2) {
#         std::cout << v2[j] << " ";
#         j++;
#     }
#     std::cout << "\n";
#     return;
    return: 
    lw $ra, 0($sp)
    addi $sp, $sp, 4
# }
merge_vec_fin: jr $ra 

# int main(void) {
main:
    #Cargamos todos los parametros 
    lw $s0, n1
    la $s1, v1
    lw $s2, n2
    la $s3, v2
    lw $s4, n3
    la $s5, v3

#     std::cout << "\nVector con dimension " << n1 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, LF
    syscall 
#     printvec(v1,n1);
    move $a0, $s0
    move $a1, $s1
    jal print_vec
  
#     std::cout << "\nVector con dimension " << n2 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, LF
    syscall
#     printvec(v2,n2);
    move $a0, $s2
    move $a1, $s3
    jal print_vec

#     std::cout << "\nVector con dimension " << n3 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, LF
    syscall
#     printvec(v3,n3);
    move $a0, $s4
    move $a1, $s5
    jal print_vec

  
#     std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall 
    li $v0, 11
    la $a0, LF
    syscall
#     merge(v1,n1,v2,n2);

    move $a0, $s0
    move $a1, $s1
    move $a2, $s2
    move $a3, $s3

    jal merge_vec

#     std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall
    li $v0, 11
    la $a0, LF 
    syscall 

    move $a0, $s0
    move $a1, $s1
    move $a2, $s4
    move $a3, $s5

    jal merge_vec 
#     merge(v1,n1,v3,n3);

#     std::cout << "\nFIN DEL PROGRAMA\n";
    li $v0, 4
    la $a0, cad3
    syscall
    li $v0, 11
    la $a0, LF 
    syscall 

    li $v0, 10
    syscall
#     return(0);
# }

