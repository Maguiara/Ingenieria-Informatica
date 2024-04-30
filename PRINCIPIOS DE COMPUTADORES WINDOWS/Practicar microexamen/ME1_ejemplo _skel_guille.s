# Autor: 
# Fecha ultima modificacion: 

# #include <iostream>

# const int n1 = 10;
# double v1[n1] = {10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0};
# const int n2 = 5;
# double v2[n2] = {5.5, 4.5, 4.25, 2.5, 2.5 };



size = 8     # bytes que ocupa cada elemento
LF = 10
SPACE = 32

    .data
v1:         .double 10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0
v2:         .double 5.5, 4.5, 4.25, 2.5, 2.5 
n1:         .word 10 # tamano del v1
n2:         .word 5 # numero eltos vector 2. Inicialmente suponemos vacios
space:      .asciiz " "
newline:    .asciiz "\n"
title:      .asciiz "\nMicroexamen práctico de Principio de Computadores.\n"
cabvec:     .asciiz "\nVector con dimension "
msg_ord:    .asciiz "\nVector ordenado estrictamente decrecite\n"
msg_no_ord: .asciiz "\nVector NO ordenado estrictamente decrecite\n"
msg_fin:    .asciiz "\nFIN DEL PROGRAMA.\n"

    .text
# void printvec(double v[], const int n, std::string separador) {
print_vect:
    addi $sp, -16
    sw $ra, 0($sp)
    sw $s0, 4($sp)
    sw $s1, 8($sp)
    sw $s2, 12($sp)

    move $s0, $a0 # $s0 -> n1
    move $s1, $a1 #$s1 -> v1 (dirreccion de memoria)

    li $s2, 0 #Iterador para el bucle for 
#     for (int i = 0; i < n; i++)

    for:
    bge $s2, $s0, for_fin
    
#         std::cout << v[i] << separador;
    l.d $f12, 0($s1)
    li $v0, 3
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall

    addi $s2, 1
    addi $s1, size

    j for
# }
    for_fin:
    #POP
    lw $ra, 0($sp)
    lw $s0, 4($sp)
    lw $s1, 8($sp)
    lw $s2, 12($sp)
    addi $sp, 16

print_vect_fin: jr $ra

# int check(double a,double b) {
check:

    addi $sp, -4
    sw $ra, 0($sp)

    # $f4 -> a
    # $f6 -> b

#     if (a < b ) return(-1);
    if:
    c.lt.d $f4, $f6
    bc1f else_if

    li $v0, -1

#     else if (a == b) return(0);
    else_if:
    c.eq.d $f4, $f6
    bc1f else

    li $v0, 0
#     else return(1);
    else:
    li $v0, 1

    lw $ra, 0($sp)
    addi $sp, 4
# }
check_fin: jr $ra

# int ordenado(double v[], const int n) {
ordenado2:
    addi $sp, -4
    sw $ra, 0($sp)

    move $t0, $a0  # $t0 -> n1
    move $t1, $a1  #  $t1 -> v1 dirrecion de memoria inicial
#     int resultado = 1;
    li $t2, 1

    sub $t3, $s0, 1 # n-1
    li $t4, 0 #Iterador para el bucle for
#     for (int i = 0; i < n-1; i++)
    for2:
    bge $t4, $t3, for2_fin

    l.d $f4, 0($t1)
    l.d $f6, 8($t1)

    jal check
#         if ( check(v[i],v[i+1]) != 1 ) {
    if2:
    bne $v0, 1, if2_fin   
#             resultado = 0;
    move $t2, $zero
#             break;
    j for2_fin
#         }
    if2_fin:

    addi $t4, 1
    addi $t1, size
    j for2

    for2_fin:
#     return(resultado);
    lw $ra, 0($sp)
    addi $sp, 4
# }
ordenado2_fin: jr $ra


# int main(void) {
main:
    li $v0, 4
    la $a0, title
    syscall
#     std::cout << "\nVector con dimension " << n1 << std::endl;
    li $v0, 4
    la $a0, cabvec
    syscall
    li $v0, 1
    lw $a0, n1
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    lw $a0, n1 
    la $a1, v1

    jal print_vect
#     printvec(v1,n1," ");

    li $v0, 11
    la $a0, LF
    syscall
#     std::cout << std::endl;

    lw $a0, n1
    la $a1, v1
    
    jal ordenado2
#     int o = ordenado(v1,n1);

#     if (o == 1) std::cout << "\nVector ordenado estrictamente decrecite\n";
    if3:
    beq $v0, 1, else3
    li $v0, 4
    la $a0, msg_ord
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    j continue
#     else std::cout << "\nVector NO ordenado estrictamente decrecite\n";
    else3:
    li $v0, 4
    la $a0, msg_no_ord
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    continue:
#     std::cout << "\nVector con dimension " << n2 << std::endl;
    li $v0, 4
    la $a0, cabvec
    syscall
    li $v0, 1
    lw $a0, n2
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    lw $a0, n2
    la $a1, v2

#     printvec(v2,n2," ");
    jal print_vect
#     std::cout << std::endl;

    li $v0, 11
    la $a0, LF
    syscall

    lw $a0, n2
    la $a1, v2

    jal ordenado2
#     o = ordenado(v2,n2);

    
#     if (o == 1) std::cout << "\nVector ordenado estrictamente decrecite\n";
    if4:
    bne $v0, 1, else4
    li $v0, 4
    la $a0, msg_ord
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    j continue2
#     else std::cout << "\nVector NO ordenado estrictamente decrecite\n";
    else4:
    li $v0, 4
    la $a0, msg_no_ord
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    continue2:

#     std::cout << "\nFIN DEL PROGRAMA\n";
    li $v0, 4
    la $a0, msg_fin
    syscall 

    li $v0, 10
    syscall
#     return(0);
# }



