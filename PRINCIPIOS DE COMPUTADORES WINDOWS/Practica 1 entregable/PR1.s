# PR1. PRINCIPIO DE COMPUTADORES.
# Autor: Marco Aguiar Álvarez 
# Fecha ultima modificacion: 22/02/2024
	.data

titulo:		.asciiz "\nPR1: Principio de computadores.\n"
pet:		.asciiz "\nIntroduzca maximo error permitido: "
caderr:		.asciiz "\nError: el dato introducido debe cumplir 0.00001 <= dato < 1\n"
cade:		.asciiz "\nNumero e: "
cadnt:		.asciiz "\nNumero de terminos: "
cadfin:		.asciiz "\nPR1: Fin del programa.\n"

	.text
main:

	# Imprimir titulo
	li $v0, 4
	la $a0, titulo
	syscall
	
peticion_error:

	#Imprimimos el mensaje de peticion del error
	li $v0, 4
	la $a0, pet
	syscall

	#Leemos el error
	li $v0, 7
	syscall
	mov.d $f20, $f0	

	#Cargamos los valores de error maximo y minimo y comprobamos que sea valido
	li.d $f12, 0.00001
	c.lt.d $f20, $f12
	bc1t error

	li.d $f14, 1.0
	c.lt.d $f20, $f14
	bc1f error 	


	#Inicialinzamos las variables necesarias
	li.d $f24, 1.0	#numero e
	li.d $f26, 1.0	#factorial
	li.d $f28, 1.0	#numero de terminos
	li.d $f30, 1.0	#ultimo termino
	li.d $f8, 1.0 # 1 constante para operaciones 

while:
	#Comparamos que el ultimo termino sea menor al error introducido
	c.lt.d $f30, $f20
	bc1t imprimir_resultado

	#Operaciones
	mul.d $f26, $f26, $f28
	div.d $f30, $f8, $f26
	add.d $f24, $f24, $f30
	add.d $f28, $f28, $f8

	j while

imprimir_resultado: 

	#Imrprime el resultdo
	li $v0, 4
	la $a0, cade
	syscall

	li $v0, 3
	mov.d $f12, $f24
	syscall

	#Imprime el numero de terminos
	li $v0, 4
	la $a0, cadnt
	syscall

	li $v0, 3
	mov.d $f12, $f28
	syscall

	j fin_programa

error: 
	#Imprimir el mensaje de error
	li $v0, 4
	la $a0, caderr
	syscall
	j peticion_error

fin_programa:
	# Finalizamos el programa
	li $v0, 4
	la $a0, cadfin
	syscall

	li $v0, 10
	syscall