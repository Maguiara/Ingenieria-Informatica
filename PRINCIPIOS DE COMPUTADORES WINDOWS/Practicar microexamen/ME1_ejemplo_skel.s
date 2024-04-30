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
    addi $sp, $sp, -20
    sw $ra, 0($sp)
    sw $s0, 4($sp)
    sw $s1, 8($sp)
    sw $s2, 12($sp)
    sw $s3, 16($sp)
    

    # $a0 = longitud vector (n1)
    move $s0, $a0
    # $a1 = direccion del vector (v1)
    move $s1, $a1

    li $v0, 1
    move $a0, $s0
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    li $s2, 0 #Iterador para el bucle for
#     for (int i = 0; i < n; i++)
    for:
    mul $s3, $s2, sizeD
    addu $s3, $s1, $s3
    l.d $f12, 0($s3)
#         std::cout << v[i] << " ";
    li $v0, 3
    syscall 
    li $v0, 11
    la $a0, SPACE
    syscall

    addi $s2, $s2, 1
    blt $s2, $s0, for

    for_fin:


#     std::cout << "\n";
    li $v0, 11
    la $a0, LF
    syscall 
#     return;
    lw $ra, 0($sp)
    lw $s0, 4($sp)
    lw $s1, 8($sp)
    lw $s2, 12($sp)
    lw $s3, 16($sp)
    addi $sp, $sp, 20
# }
print_vec_fin: jr $ra

# int ordenado(double *v, const int n) {
ordenado:
    
    move $t0, $a0 #Tamaño del vector
    move $t1, $a1, #Direccion del vector

#     int resultado = 1;
    li $v0, 1 #Resultado que devuelve la funcion
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
    c.le.d $f0, $f2
    bc1f if_fin
#             resultado = 0;
    move $v0, $zero
#             break;
    j while_fin
    if_fin: 

#         }
#         i++;
    add $t3, $t3, 1
    j while
#     }
    while_fin: 
#     return(resultado);
# }
ordenado_fin: jr $ra

# void merge(double *v1, const int n1,double *v2, const int n2) {
merge_vec: 

    addi $sp, $sp, -48
    sw $ra, 0($sp)
    sw $s0, 4($sp)
    sw $s1, 8($sp)
    sw $s2, 12($sp)
    sw $s3, 16($sp)
    sw $s4, 20($sp)
    sw $s5, 24($sp)
    sw $s6, 28($sp)
    s.d $f20, 32($sp)
    s.d $f24, 40($sp)

    move $s0, $a0
    move $s1, $a1
    move $s2, $a2
    move $s3, $a3


    jal ordenado 

#     if (o1 == 0) return;
    beq $v0, $zero, return
#     int o2 = ordenado(v2,n2);
    move $a0, $s2
    move $a1, $s3
    jal ordenado 

#     if (o2 == 0) return;
    beq $v0, $zero, return
#     int i = 0; // índice para recorrer el v1
    li $s4, 0
#     int j = 0; // índice para recorrer el v2
    li $s5, 0 
#     while ( ( i < n1) && (j < n2) ) {
    while_principal:
    bge $s4, $s0, while_principal_fin
    bge $s5, $s2, while_principal_fin

    mul $s6, $s4, sizeD
    addu $s6, $s6, $s1
    l.d $f20, 0($s6)
    mul $s6, $s5, sizeD
    addu $s6, $s6, $s3
    l.d $f22, 0($s6)
#         if (v1[i] >= v2[j]) {
    if_2:
    c.lt.d $f20, $f22 
    bc1t else

#             std::cout << v1[i] << " ";
    li $v0, 3
    mov.d $f12, $f20
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall
#             i++;
    addi $s4, $s4, 1
    j while_principal
#         }
#         else {
    else:
#             std::cout << v2[j] << " ";
    li $v0, 3
    mov.d $f12, $f22
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall
#             j++;
    addi $s5, $s5, 1
    j while_principal
#         }
#     }
    while_principal_fin:

    li $v0, 11
    la $a0, SPACE
    syscall

#     while ( i < n1) {
    while_i:
    bge $s4, $s0, while_i_fin

    mul $s6, $s4, sizeD
    addu $s6, $s6, $s1
    l.d $f20, 0($s6)
#         std::cout << v1[i] << " ";
    li $v0, 3
    mov.d $f12, $f20
    syscall
    
    li $v0, 11
    la $a0, SPACE
    syscall 

#         i++;
    addi $s4, $s4, 1

    j while_i
#     }
    while_i_fin:

#     while ( j < n2) {
    while_j:
    bge $s5, $s2, while_j_fin

    mul $s6, $s5, sizeD
    addu $s6, $s6, $s2
    l.d $f22, 0($s6)
#         std::cout << v2[j] << " ";
    li $v0, 3
    mov.d $f12, $f22
    syscall
    li $v0, 11
    la $a0, SPACE 
    syscall
#         j++;
    addi $s5, $s5, 1

    j while_j
#     }
    while_j_fin:

#     std::cout << "\n";
    li $v0, 11
    la $a0, LF
    syscall
#     return;
    return: 
    lw $ra, 0($sp)
    lw $s0, 4($sp)
    lw $s1, 8($sp)
    lw $s2, 12($sp)
    lw $s3, 16($sp)
    lw $s4, 20($sp)
    lw $s5, 24($sp)
    lw $s6, 28($sp)
    l.d $f20, 32($sp)
    l.d $f24, 40($sp)
    addi $sp, $sp, 48
# }
merge_vec_fin: jr $ra 

# int main(void) {
main:
  

#     std::cout << "\nVector con dimension " << n1 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall 
#     printvec(v1,n1);
    lw $a0, n1
    la $a1, v1
    jal print_vec
  
#     std::cout << "\nVector con dimension " << n2 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall
#     printvec(v2,n2);
    lw $a0, n2
    la $a1, v2
    jal print_vec

#     std::cout << "\nVector con dimension " << n3 << std::endl;
    li $v0, 4
    la $a0, cad1
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall
#     printvec(v3,n3);
    lw $a0, n3
    la $a1, v3
    jal print_vec

  
#     std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall 
    li $v0, 11
    la $a0, LF
    syscall
#     merge(v1,n1,v2,n2);

    lw $a0, n1
    la $a1, v1
    lw $a2, n2
    la $a3, v2

    jal merge_vec

#     std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall
    li $v0, 11
    la $a0, LF 
    syscall 

    lw $a0, n1
    la $a1, v1
    lw $a2, n3
    la $a3, v3

    jal merge_vec 
#     merge(v1,n1,v3,n3);

#     std::cout << "\nFIN DEL PROGRAMA\n";
    li $v0, 4
    la $a0, cad3
    syscall
    li $v0, 11
    la $a0, LF 
    syscall 

#     return(0);
    li $v0, 10
    syscall
# }

