

sizeI = 4
LF = 10
SPACE = 32

    .data
n1: .word 10
v1: .word 7, 2, 6, 8, 1, 9, 10, 3, 4, 5
str_vectorDimension: .asciiz "Vector con dimension " 
str_vect: .asciiz "v["
str_vect2: .asciiz "]"

.text 

main: 

    li $v0, 4
    la $a0, str_vectorDimension
    syscall
    li $v0, 11
    la $a0, SPACE
    syscall
    li $v0, 1
    lw $a0, n1
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    li $s0, 0 #Iterador
    lw $s1, n1
    la $s2, v1
for: 
    #for(int i = 0; i < numElem; i++) {
    bge $s0, $s1, for_fin

        #int valor = vect[i];
    mul $t0, $s0, sizeI
    addu $t0, $t0, $s2
    lw $s3, 0($t0)

        #std::cout << "\nvect["  << i << "] = " << valor;
    li $v0, 4
    la $a0, str_vect
    syscall
    li $v0, 1
    move $a0, $s0
    syscall
    li $v0, 4
    la $a0, str_vect2
    syscall

    li $v0, 11
    la $a0, 61
    syscall 
    li $v0, 1
    move $a0, $s3
    syscall
    li $v0, 11
    la $a0, LF
    syscall

    addi $s0, 1
    
    j for
    #}
for_fin:
    #std::cout << "\nTermina el programa\n";

    li $v0, 10
    syscall