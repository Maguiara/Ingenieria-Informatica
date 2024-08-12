# #include <iostream>
# #include <array>

# const int n = 4;  // nunero de filas/columnas de la matriz cuadrada


# std::array<std::array<double,n>,n> matriz =  
# {{
# {1.0, 2.0, -3.5, 4.5},
# {-4.5, 3.0, 5.0, -1.0},
# {-5.0, 3.5, 2.5, 6.5},
# {-12.0, 1.25, 7.5, 0.5}
# }};


# void printmat(std::array<std::array<double,n>,n> &m,int n) {
#     for (int i = 0; i < n ; i++ ) {
#         for (int j = 0; j < n ; j ++ ) {
#             std::cout << m[i][j] << "\t";
#         }
#         std::cout << "\n";
#     }
# }

# // intercambia dos dobles
# void swap(double &a,double &b) {
#     double aux = a;
#     a = b;
#     b = aux;
# }

# // intercambia en la matriz m, la fila f1 con la fila f2
# void swap_rows(std::array<std::array<double,n>,n> &m,int f1,int f2, int n ) {
#     for (int j = 0; j < n ; j++) {
#         swap(m[f1][j],m[f2][j]);
#     }
# }

# // intercambia en la matriz m, la columna c1 con la columna c2 si el primer valor
# // de la primera columna es menor que el primer valor de la segunda
# void swap_cols(std::array<std::array<double,n>,n> &m, int c1, int c2, int n ) {
#     if (m[0][c1] < m[0][c2]) {
#         for (int i = 0; i < n ; i++) {
#             swap(m[i][c1],m[i][c2]);
#         }
#     }
# }

# // si tipo == 0 hace el espejo horizontal de la matriz sobre si misma
# // si tipo == 1 hace el espejo vertical de la matriz sobre si misma
# // si tipo != 0 y tipo != 1 retorna sin hacer modificaciones
# // devuelve en todos los casos el primer elemento de la matriz modificada
# double mirror(std::array<std::array<double,n>,n> &m,int n,int tipo) {
#     int limite;
#     if ( (tipo == 0) || (tipo == 1)) limite = n / 2;
#     else return(m[0][0]);
#     for (int i = 0 ; i < limite ; i++) {
#         if (tipo == 0) swap_rows(m,i,n-1-i,n);
#         else  swap_cols(m,i,n-1-i,n);
#     } 
#     return(m[0][0]);
# }


# int main(void){

#     std::cout << "\nESPEJA MATRIZ\n";
#     do {
#         std::cout << "\nMatriz dimension " << n << " x " << n << "\n"; 
#         printmat(matriz,n);
#         std::cout << "\n<0> Espejo horizontal\n<1> Espejo vertical\n<2> Salir\nElige opcion: ";
#         int opcion;
#         std::cin >> opcion;
#         if ((opcion < 0) || (opcion > 2)) {
#             std::cout << "\nError. Opcion incorrecta.\n";
#             continue;
#         }
#         if (opcion == 2) break;
#         double resultado;
#         resultado = mirror(matriz,n,opcion);
#         std::cout << "\nEl resultado de mirror: " << resultado;
#     } while (true);
#     std::cout << "\nFIN DEL PROGRAMA.\n";
#     return(0);
# }

size = 8     # bytes que ocupa cada elemento

    .data
matriz:     .double 1.0, 2.0, -3.5, 4.5
            .double -4.5, 3.0, 5.0, -1.0
            .double -5.0, 3.5, 2.5, 6.5
            .double -12.0, 1.25, 7.5, 0.5

n:          .word 4 # numero de filas
titulo:     .asciiz "\nESPEJA MATRIZ\n"
cabecera:   .asciiz "\nMatriz dimension "
x:          .asciiz " x "
newline:    .asciiz "\n"
menu:       .asciiz "\n<0> Espejo horizontal\n<1> Espejo vertical\n<2> Salir\nElige opcion: "
error:      .asciiz "\nError. Opcion incorrecta.\n"
msgres:     .asciiz "\nEl resultado de mirror: "
msgfin:     .asciiz "\nFIN DEL PROGRAMA.\n"

    .text

# void printmat(std::array<std::array<double,n>,n> &m,int n) {
#     for (int i = 0; i < n ; i++ ) {
#         for (int j = 0; j < n ; j ++ ) {
#             std::cout << m[i][j] << "\t";
#         }
#         std::cout << "\n";
#     }
# }

# $a0 -> dir base matriz
# $a1 -> n
printmat:
	addi $sp,-32
	sw $ra,0($sp)
	sw $s0,4($sp)
	sw $s1,8($sp)
	sw $s3,12($sp)
	sw $s4,16($sp)
	sw $s5,20($sp)
	s.d $f20,24($sp)

	move $s0,$a0 # dir base
	move $s1,$a1 # n
	li $s3,0     # i = 0
	li.d $f20,0.0

# El bucle lo haré como un do while en lugar de como un for
print_loop1:
	li $s4,0  # j = 0
	li $s5,0  # aux = 0

# std::cout << "\n";
	li $v0,11
	li $a0,10
	syscall

print_loop2:
	mul $s5,$s3,$s1 # i * n
	add $s5,$s5,$s4 # i * n + j
	mul $s5,$s5,size # i * n + j * size
	add $s5,$s5,$s0  # i * n + j * size + matriz
	l.d $f20,0($s5)

	mov.d $f12,$f20

# std::cout << m[i][j] << "\t";
	li $v0,3
	syscall

	li $v0,11
	li $a0,9
	syscall

	addi $s4,1
	blt $s4,$s1,print_loop2 # for (int j = 0; j < n ; j ++ )

	addi $s3,1
	blt $s3,$s1,print_loop1 # for (int i = 0; i < n ; i++ )

	lw $ra,0($sp)
	lw $s0,4($sp)
	lw $s1,8($sp)
	lw $s3,12($sp)
	lw $s4,16($sp)
	lw $s5,20($sp)
	l.d $f20,24($sp)
	addi $sp,32

	jr $ra

printmat_fin:

# void swap(double &a,double &b) {
#     double aux = a;
#     a = b;
#     b = aux;
# }

# $a0 -> mat1
# $a1 -> mat2
swap:
	li.d $f4,0.0
	li.d $f6,0.0

	l.d $f4, 0($a0)
	l.d $f6, 0($a1)

	s.d $f4,0($a1)
	s.d $f6,0($a0)

	jr $ra
swap_fin:

# // intercambia en la matriz m, la fila f1 con la fila f2
# void swap_rows(std::array<std::array<double,n>,n> &m,int f1,int f2, int n ) {
#     for (int j = 0; j < n ; j++) {
#         swap(m[f1][j],m[f2][j]);
#     }
# }

# $a0 -> dir base matriz
# $a1 -> fila1
# $a2 -> fila2
# $a3 -> n
swap_rows:
	addi $sp,-28
	sw $ra,0($sp)
	sw $s0,4($sp)
	sw $s1,8($sp)
	sw $s3,12($sp)
	sw $s4,16($sp)
	sw $s5,20($sp)
	sw $s6,24($sp)

	move $s0,$a0 # dir base
	move $s1,$a1 # fila1
	move $s2,$a2 # fila2
	move $s3,$a3 # n
	li $s4,0 # j = 0
	li $s5,0 # aux
	li $s6,0 # aux

for_loop_rows:
	beq $s4,$s3,for_loop_rows_fin #for (int j = 0; j < n ; j++)
	mul $s5,$s1,$s3 # fila1 * n
	add $s5,$t0,$s4 # fila1 * n + j
	mul $s5,$s5,size # fila1 * n + j * size
	add $s5,$s5,$s0 # fila1 * n + j * size + mat1

	mul $s6,$s2,$s3 # fila2 * n
	add $s6,$s6,$s4 # fila2 * n + j
	mul $s6,$s6,size # fila2 * n + j * size
	add $s6,$s6,$s0 # fila2 * n + j * size + mat1

	#  swap(m[f1][j],m[f2][j])
	move $a0,$s5
	move $a1,$s6

	jal swap

	addi $s4,1 # j++

	j for_loop_rows

for_loop_rows_fin:
	lw $ra,0($sp)
	lw $s0,4($sp)
	lw $s1,8($sp)
	lw $s3,12($sp)
	lw $s4,16($sp)
	lw $s5,20($sp)
	lw $s6,24($sp)
	addi $sp,28

	jr $ra
swap_rows_fin:

# // intercambia en la matriz m, la columna c1 con la columna c2 si el primer valor
# // de la primera columna es menor que el primer valor de la segunda
# void swap_cols(std::array<std::array<double,n>,n> &m, int c1, int c2, int n ) {
#     if (m[0][c1] < m[0][c2]) {
#         for (int i = 0; i < n ; i++) {
#             swap(m[i][c1],m[i][c2]);
#         }
#     }
# }

# $a0 -> dir base mat
# $a1 -> c1
# $a2 -> c2
# $a3 -> n
swap_cols:
	addi $sp,-28
	sw $ra,0($sp)
	sw $s0,4($sp)
	sw $s1,8($sp)
	sw $s3,12($sp)
	sw $s4,16($sp)
	sw $s5,20($sp)
	sw $s6,24($sp)

	move $s0,$a0 # dir base
	move $s1,$a1 # c1
	move $s2,$a2 # c2
	move $s3,$a3 # n
	li $s4,0 # i = 0
	li $s5,0 # aux
	li $s6,0 # aux
	li.d $f4,0.0
	li.d $f6,0.0

	mul $s5,$s4,$s3 # i * n
	add $s6,$s5,$s2 # i * n + c2
	add $s5,$s5,$s1 # i * n + c1
	mul $s5,$s5,size # i * n + c1 * size
	add $s5,$s5,$s0 # i * n + c1 * size + mat1
	l.d $f4,0($s5)

	mul $s6,$s6,size # i * n + c2 * size
	add $s6,$s6,$s0 # i * n + c2 * size + mat1
	l.d $f6,0($s6)

	# if (m[0][c1] < m[0][c2])
	c.lt.d $f4,$f6
	bc1f for_loop_cols_fin

for_loop_cols:
	beq $s4,$s3,for_loop_cols_fin # for (int i = 0; i < n ; i++)

	move $a0,$s5
	move $a1,$s6

	jal swap

	addi $s4,1 # i++

	j for_loop_cols
for_loop_cols_fin:
	lw $ra,0($sp)
	lw $s0,4($sp)
	lw $s1,8($sp)
	lw $s3,12($sp)
	lw $s4,16($sp)
	lw $s5,20($sp)
	lw $s6,24($sp)
	addi $sp,28

	jr $ra
swap_cols_fin:

# // si tipo == 0 hace el espejo horizontal de la matriz sobre si misma
# // si tipo == 1 hace el espejo vertical de la matriz sobre si misma
# // si tipo != 0 y tipo != 1 retorna sin hacer modificaciones
# // devuelve en todos los casos el primer elemento de la matriz modificada
# double mirror(std::array<std::array<double,n>,n> &m,int n,int tipo) {
#     int limite;
#     if ( (tipo == 0) || (tipo == 1)) limite = n / 2;
#     else return(m[0][0]);
#     for (int i = 0 ; i < limite ; i++) {
#         if (tipo == 0) swap_rows(m,i,n-1-i,n);
#         else  swap_cols(m,i,n-1-i,n);
#     } 
#     return(m[0][0]);
# }

# $a0 -> dir base mat
# $a1 -> n
# $a2 -> tipo de espejo
# retorna $f0 -> m[0][0] 
mirror:
	addi $sp,-24
	sw $ra,0($sp)
	sw $s0,4($sp)
	sw $s1,8($sp)
	sw $s3,12($sp)
	sw $s4,16($sp)
	sw $s5,20($sp)

	move $s0,$a0 # dir base
	move $s1,$a1 # n
	move $s2,$a2 # tipo
	li $s3,0     # limite = 0
	li $s4,0     # i = 0 
	li $t0,2

	addi $s5,$s1,-1 # n - 1

	# if ( (tipo == 0) || (tipo == 1))
	bnez $s2,for_condition_fin
	bne $s2,1,for_condition_fin

	div $s3,$s1,$t0 # limite = n / 2

for_condition_mirror:
	beq $s4,$s3,for_condition_fin # for (int i = 0 ; i < limite ; i++)

	bnez $s2,if_fin # if (tipo == 0)
	# swap_rows(m,i,n-1-i,n)

	sub $s5,$s5,$s4 # n - 1 - i

	move $a0,$s0
	move $a1,$s4
	move $a2,$s5
	move $a3,$s1

	jal swap_rows

	addi $s4,1 # i++

	j for_condition_mirror

if_fin:
	# else  swap_cols(m,i,n-1-i,n)
	sub $s5,$s5,$s4 # n - 1 - i

	move $a0,$s0
	move $a1,$s4
	move $a2,$s5
	move $a3,$s1

	jal swap_cols

	addi $s4,1 # i++

	j for_condition_mirror 
for_condition_fin:
	l.d $f0,0($s0)

	lw $ra,0($sp)
	lw $s0,4($sp)
	lw $s1,8($sp)
	lw $s3,12($sp)
	lw $s4,16($sp)
	lw $s5,20($sp)
	addi $sp,24

	jr $ra
mirror_fin:

########### Tabla de registros #############
# $s0 -> mat
# $s1 -> n
# $s3 -> opcion menu

main:
	la $s0,matriz
	lw $s1,n

	la $a0,titulo
	li $v0,4
	syscall

	la $a0,cabecera
	li $v0,4
	syscall

	move $a0,$s1
	li $v0,1
	syscall

	la $a0,x
	li $v0,4
	syscall

	move $a0,$s1
	li $v0,1
	syscall

imprimir_mat:
	move $a0,$s0
	move $a1,$s1

	jal printmat

	la $a0,newline
	li $v0,4
	syscall
menu_mat:
	la $a0,menu
	li $v0,4
	syscall

	li $v0,5
	syscall

	move $s3,$v0

	beqz $s3,opcion0
	beq $s3,1,opcion1
	beq $s3,2,fin

	j error_op

opcion0:
	# $a0 -> dir base mat
	# $a1 -> n
	# $a2 -> tipo de espejo
	# retorna $f0 -> m[0][0] 
	move $a0,$s0
	move $a1,$s1
	li $a2,0

	jal mirror

	mov.d $f12,$f0

	la $a0,msgres
	li $v0,4
	syscall

	li $v0,3
	syscall

	la $a0,newline
	li $v0,4
	syscall

	j imprimir_mat

opcion1:
	# $a0 -> dir base mat
	# $a1 -> n
	# $a2 -> tipo de espejo
	# retorna $f0 -> m[0][0] 
	move $a0,$s0
	move $a1,$s1
	li $a2,1

	jal mirror

	mov.d $f12,$f0

	la $a0,msgres
	li $v0,4
	syscall

	li $v0,3
	syscall

	la $a0,newline
	li $v0,4
	syscall

	j imprimir_mat
error_op:
	la $a0,error
	li $v0,4
	syscall

	j menu_mat
fin:
	la $a0,msgfin
	li $v0,4
	syscall

	li $v0,10
	syscall
