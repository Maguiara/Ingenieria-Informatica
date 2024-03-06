.data
titulo:    .asciiz "Introduzca un radio: "
area:     .asciiz "El area del circulo es: "
radio:     .float 0.0
resultado: .float 0.0
pi:        .float 3.14159

.text
.globl main

main:
    # Print the prompt
    li $v0, 4
    la $a0, titulo
    syscall

    # Read the radius from the user
    li $v0, 5
    syscall
    move $s0, $v0
    #Pasamos el entero leido a float
    mtc1 $s0, $f0
    cvt.s.w $f2, $f0

    # Calculate the area of the circle
    lwc1 $f4, pi
    mul.s $f6, $f2, $f2
    mul.s $f8, $f6, $f4 
    
    # Print the result
    li $v0, 4
    la $a0, area
    syscall
    li $v0, 2
    mov.s $f12, $f8
    syscall

    # Exit the program
    li $v0, 10
    syscall