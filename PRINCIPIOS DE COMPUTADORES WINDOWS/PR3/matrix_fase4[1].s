#// Solución PR3 curso 23-24
#// Manejo de matrices con funciones
#
#
#typedef struct {
#  int nFil;
nFil = 0	# El desplazamiento al campo dentro de la estructura
#  int nCol;
nCol = 4	# El desplazamiento al campo dentro de la estructura
#  float elementos[];
elementos = 8	# El desplazamiento al campo dentro de la estructura
#} structMat;
#

sizeF = 4	# Numero de bytes de un float
LF = 10		# Caracter salto de línea
	.data
#structMat mat1 {
#  6,
#  6,
#  {
#    11.11, 12.12, 13.13, 14.14, 15.15, 16.16,
#    21.21, 22.22, 23.23, 24.24, 25.25, 26.26,
#    31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
#    41.41, 42.42, 43.43, 44.44, 45.45, 46.46,
#    51.51, 52.52, 53.53, 54.54, 55.55, 56.56,
#    61.61, 62.62, 63.63, 64.64, 65.65, 66.66
#  }
#};
mat1:	.word	6
	.word	6
	.float	11.11, 12.12, 13.13, 14.14, 15.15, 16.16,
	.float	21.21, 22.22, 23.23, 24.24, 25.25, 26.26,
	.float	31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
	.float	41.41, 42.42, 43.43, 44.44, 45.45, 46.46,
	.float	51.51, 52.52, 53.53, 54.54, 55.55, 56.56,
	.float	61.61, 62.62, 63.63, 64.64, 65.65, 66.66

#structMat mat2 {
#  7,
#  10,
#  {
#    -36.886, -58.201,  78.671,  19.092, -50.781,  33.961, -59.511, 12.347,  57.306,  -1.938,
#    -86.858, -81.852,  54.623, -22.574,  88.217,  64.374,  52.312, 47.918, -83.549,  19.041,
#     4.255, -36.842,  82.526,  27.394,  56.527,  39.448,  18.429, 97.057,  76.933,  14.583,
#    67.79 ,  -9.861, -96.191,  32.369, -18.494, -43.392,  39.857, 80.686, -36.87 , -17.786,
#    30.073,  89.938,  -6.889,  64.601, -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524,
#    84.323, -51.718,  93.127, -10.757,  32.119,  98.214,  69.471, 73.814,   3.724,  57.208,
#    -41.528, -17.458, -64.226, -71.297, -98.745,   7.095, -79.112, 33.819,  63.531, -96.181
#  }
#};
mat2:	.word	7
	.word	10
	.float	-36.886, -58.201,  78.671,  19.092, -50.781,  33.961, -59.511, 12.347,  57.306,  -1.938,
	.float	-86.858, -81.852,  54.623, -22.574,  88.217,  64.374,  52.312, 47.918, -83.549,  19.041,
	.float	4.255, -36.842,  82.526,  27.394,  56.527,  39.448,  18.429, 97.057,  76.933,  14.583,
	.float	67.79 ,  -9.861, -96.191,  32.369, -18.494, -43.392,  39.857, 80.686, -36.87 , -17.786,
	.float	30.073,  89.938,  -6.889,  64.601, -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524,
	.float	84.323, -51.718,  93.127, -10.757,  32.119,  98.214,  69.471, 73.814,   3.724,  57.208,
	.float	-41.528, -17.458, -64.226, -71.297, -98.745,   7.095, -79.112, 33.819,  63.531, -96.181

# structMat mat3 {
#   1,
#   8,
#   {
#     -36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61
#   }
# };
mat3:	.word	1
	.word	8
	.float	-36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61

# structMat mat4 {
#   16,
#   1,
#   { -90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3 ,
#     -96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83 }
# };
mat4:	.word	16
	.word	1
	.float	-90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3
	.float	-96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83

# structMat mat5 {
#   1,
#   1,
#   { 78.98 }
# };
mat5:	.word	1
	.word	1
	.float	78.98

# structMat mat6 {
#   0,
#   0,
#   { 0 }
# };
mat6:	.word	0
	.word	0
	.float	0.0

#float infinito = INFINITY;
infinito:	.word	0x7F800000

# Cadenas de caracteres
str_titulo:	.asciiz	"\nComienza programa manejo matrices con funciones\n"
str_menu:	.ascii	"(0) Terminar el programa\n"
		.ascii	"(1) Cambiar la matriz de trabajo\n"
		.ascii	"(3) Cambiar el valor de un elemento\n"
		.ascii	"(4) Intercambiar un elemento con su opuesto\n"
		.ascii	"(7) Encontrar el minimo\n"
		.asciiz	"\nIntroduce opción elegida: "
str_errorOpc:	.asciiz	"Error: opcion incorrecta\n"
str_termina:	.asciiz	"\nTermina el programa\n"
str_elijeMat:	.asciiz	"\nElije la matriz de trabajo (1..6): "
str_numMatMal:	.asciiz	"Numero de matriz de trabajo incorrecto\n"
str_errorFil:	.asciiz	"Error: dimension incorrecta.  Numero de fila incorrecto\n"
str_errorCol:	.asciiz	"Error: dimension incorrecta.  Numero de columna incorrecto\n"
str_indFila:	.asciiz	"\nIndice de fila: "
str_indCol:	.asciiz	"Indice de columna: "
str_nuevoValor:	.asciiz	"Nuevo valor para el elemento: "
str_valMin:	.asciiz	"\nEl valor minimo esta en ("
str_conValor:	.asciiz	") con valor "

str_matTiene:	.asciiz	"\n\nLa matriz tiene dimension "

	.text

# /**
#  * @brief Imprime una matriz
#  * @param mat -> $a0
#  */
# void print_mat(structMat* mat) {
print_mat:
#       mat -> $a0
#       nFil -> $s1
#       nCol -> $s2
#       elem -> $s3
#       f -> $s4
#       c -> $s5
#       valor -> $f20

        # Guardamos todos los registros que vamos a usar
        addiu   $sp, $sp, -32
        sw      $s1, 0($sp)
        sw      $s2, 4($sp)
        sw      $s3, 8($sp)
        sw      $s4, 12($sp)
        sw      $s5, 16($sp)
        sw      $s6, 20($sp)
        s.s     $f20, 24($sp)
        sw      $ra, 28($sp)

#   int nFil = mat->nFil;
        lw      $s1, nFil($a0)
#   int nCol = mat->nCol;
        lw      $s2, nCol($a0)
#   float* elem = mat->elementos;
        addiu   $s3, $a0, elementos
#   std::cout << "\n\nLa matriz tiene dimension " << nFil << 'x' << nCol << '\n';
        li      $v0, 4
        la      $a0, str_matTiene
        syscall

        li      $v0, 1
        move    $a0, $s1
        syscall

        li      $v0, 11
        li      $a0, 120
        syscall

        li      $v0, 1
        move    $a0, $s2
        syscall

        li      $v0, 11
        li      $a0, LF
        syscall

        blez    $s1, return_print_mat
        blez    $s2, return_print_mat
        
        li      $s4, 0
#   for(int f = 0; f < nFil; f++) {
for_fil_print_mat:
        li      $s5, 0
        bge     $s4, $s1, for_fil_print_mat_fin
for_col_print_mat:
#     for(int c = 0; c < nCol; c++) {
        bge     $s5, $s2, for_col_print_mat_fin
#       std::cout << elem[f*nCol + c] << ' ';

        mul     $s6, $s4, $s2           # f * nCol
        addu    $s6, $s6, $s5           # f * nCol + c
        mul     $s6, $s6, sizeF         # (f * nCol + c) * sizeF

        addu    $s6, $s6, $s3           # &elem[f*nCol + c] (direccion)
        l.s     $f20, 0($s6)            # elem[f*nCol + c]
        mov.s   $f12, $f20       
        li      $v0, 2

        syscall

        li      $v0, 11
        li      $a0, 32
        syscall

# c++
        addi    $s5, $s5, 1
        b       for_col_print_mat
#     }
for_col_print_mat_fin:
#     std::cout << '\n';
        li      $v0, 11
        li      $a0, LF
        syscall
# f++
        addi    $s4, $s4, 1
        b       for_fil_print_mat
#   }
for_fil_print_mat_fin:
#   std::cout << '\n';
        li      $v0, 11
        li      $a0, LF
        syscall

return_print_mat:
        # Recogemos todos los $s y el $ra del principio
        lw      $s1, 0($sp)
        lw      $s2, 4($sp)
        lw      $s3, 8($sp)
        lw      $s4, 12($sp)
        lw      $s5, 16($sp)
        lw      $s6, 20($sp)
        l.s     $f20, 24($sp)
        lw      $ra, 28($sp)
        addiu   $sp, $sp, 32

        jr      $ra
print_mat_fin:
# }


# /**
#  * @brief Cambia el valor de un elemento de la matriz
#  * @param mat -> $a0
#  * @param indF -> $a1
#  * @param indC -> $a2
#  * @param valor -> $f12
#  */
# void change_elto(structMat* mat, int indF, int indC, float valor) {
change_elto:
#       mat -> $a0
#       indF -> $a1
#       indC -> $a2
#       valor -> $f12
#       numCol -> $t3
#       numFil -> $t4

        move    $t0, $a0
        move    $t1, $a1
        move    $t2, $a2
        mov.s   $f4, $f12
#   int numCol = mat->nCol;
        lw      $t3, nCol($t0)
#   mat->elementos[indF * numCol + indC] = valor;
        mul     $t4, $t1, $t3
        addu    $t4, $t4, $t2
        mul     $t4, $t4, sizeF

        addu    $t5, $t4, $t0
        addiu   $t5, $t5, elementos

        swc1    $f12, 0($t5)

        jr      $ra   
# }
change_elto_fin:


# /**
#  * @brief Intercambia dos elementos de la matriz
#  * @param e1 -> $a0
#  * @param e2 -> $a1
#  */
# void swap(float* e1, float* e2) {
swap:
#       e1 -> a0
#       e2 -> a1
#       temp1 -> t0
#       temp2 -> t1

#   float temp1 = *e1;
        l.s     $f12, 0($a0)
#   float temp2 = *e2;
        l.s     $f13, 0($a1)
#   *e1 = temp2;
        s.s     $f13, 0($a0)
#   *e2 = temp1;
        s.s     $f12, 0($a1)

        jr      $ra
# }
swap_fin:


# /**
#  * @brief Intercambia dos elementos de la matriz diagonalmente opuestos
#  * @param mat -> $a0
#  * @param indF -> $a1
#  * @param indC -> $a2
#  */
# void intercambia(structMat* mat, int indF, int indC) {
intercambia:
#       mat -> $a0
#       indF -> $a1
#       indC -> $a2
#       numCol -> $t3
#       numFil -> $t4
#       datos -> $t5
#       e1 -> $t6
#       e2 -> $t7

#   int numCol = mat->nCol;
        lw      $t3, nCol($a0)
#   int numFil = mat->nFil;
        lw      $t4, nFil($a0)
#   float* datos = mat->elementos;
        addu    $t5, $a0, elementos
#   float* e1 = &datos[indF * numCol + indC];
        mul     $t6, $a1, $t3
        addu    $t6, $t6, $a2

        mul     $t6, $t6, sizeF

        addu    $t6, $t6, $t5
#   float* e2 = &datos[(numFil - indF - 1) * numCol + (numCol - indC - 1)];
        subu    $t7, $t4, $a1
        subu    $t7, $t7, 1
        mul     $t7, $t7, $t3
        subu    $t8, $t3, $a2
        subu    $t8, $t8, 1
        addu    $t7, $t7, $t8

        mul     $t7, $t7, sizeF

        addu    $t7, $t7, $t5

#   swap(e1, e2);
        move    $a0, $t6
        move    $a1, $t7

        addiu   $sp, $sp, -4
        sw      $ra, 0($sp)

        jal     swap

        lw      $ra, 0($sp)
        addiu   $sp, $sp, 4

        jr      $ra
# }
intercambia_fin:


# /**
#  * @brief Busca el elemento mínimo de la matriz
#  * @param mat -> $a0
#  * @return min -> $f0, filaMin -> $v0, columnaMin -> $v1
#  */
# std::tuple<float, int, int> find_min(structMat* mat) {
find_min:
#       mat -> $a0
#       numCol -> $t1
#       numFil -> $t2
#       datos -> $t3
#       min -> $f4
#       fmin -> $t4
#       cmin -> $t5
#       f -> $t7
#       c -> $t8
#       valor -> $f6

#   int numCol = mat->nCol;
        lw      $t1, nCol($a0)
#   int numFil = mat->nFil;
        lw      $t2, nFil($a0)
#   float* datos = mat->elementos;
        addu    $t3, $a0, elementos
#   float min = infinito;
        l.s     $f4, infinito
#   int fmin = -1;
        li      $t4, -1
#   int cmin = -1;
        li      $t5, -1

# Si la matriz no tiene elementos, devolvemos el valor infinito
        blez    $t1, return_find_min
        blez    $t2, return_find_min
#   for(int f = 0; f < numFil; f++) {
        li      $t7, 0
for_fil_find_min:
#     for(int c = 0; c < numCol; c++) {
        li      $t8, 0
for_col_find_min:
#       float valor = datos[f * numCol + c];
        mul     $t9, $t7, $t1
        addu    $t9, $t9, $t8
        mul     $t9, $t9, sizeF

        addu    $t9, $t9, $t3
        l.s     $f6, 0($t9)
#       if (valor < min) {
        c.lt.s  $f6, $f4
        bc1f    for_col_find_min_fin
valor_menor_min:
#         min = valor;
        mov.s   $f4, $f6
#         fmin = f;
        move    $t4, $t7
#         cmin = c;
        move    $t5, $t8
for_col_find_min_fin:
        addi    $t8, $t8, 1
        blt     $t8, $t1, for_col_find_min
#       }
for_fil_find_min_fin:
        addi    $t7, $t7, 1
        blt     $t7, $t2, for_fil_find_min
#     }
#   }
#   return {min, fmin, cmin};
return_find_min:
        mov.s   $f0, $f4
        move    $v0, $t4
        move    $v1, $t5

        jr      $ra
# }
find_min_fin:



# int main() {
main:
# dir matriz -> s0
# opcion -> s1
# dir matriz cambia -> t1
# indFila -> s2
# indCol -> s3
# valor -> f20
# valorMin -> f21
# filaMin -> s4
# columnaMin -> s5

#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
#   std::cout << "\nComienza programa manejo matrices con funciones\n";
	li	$v0, 4
	la	$a0, str_titulo
	syscall
#   structMat* matTrabajo = &mat1;
        la      $s0, mat1
#   while(true) {
while:
#     print_mat(matTrabajo);
        move    $a0, $s0

        jal     print_mat

#     std::cout <<
#     "(0) Terminar el programa\n"
#     "(1) Cambiar la matriz de trabajo\n"
#     "(3) Cambiar el valor de un elemento\n"
#     "(4) Intercambiar un elemento con su opuesto\n"
#     "(7) Encontrar el minimo\n"
#     "\nIntroduce opción elegida: ";
        li      $v0, 4
        la      $a0, str_menu
        syscall
#     int opcion;
#     std::cin >> opcion;
	li      $v0, 5
	syscall
	move	$s1, $v0
#     if(opcion == 0) {
#       break;
#     }PrinComp/pr3/matrix_convenio_v2.s
        beqz    $s1, end_while
#     // Opción 1 ////////////////////////////////////////////////////////////
opt_1:
#     if(opcion == 1) {
        bne     $s1, 1, opt_3_4
#       std::cout << "\nElije la matriz de trabajo (1..6): ";
        li      $v0, 4
        la      $a0, str_elijeMat
        syscall
#       int matT;
#       std::cin >> matT;
        li      $v0, 5
        syscall
        move    $t1, $v0
get_mat1:
#       if (matT == 1) {
        bne     $t1, 1, get_mat2
#         matTrabajo = &mat1;
        la      $s0, mat1
#         continue;  // volvemos al principio del bucle
        j       while
#       }
get_mat2:
#       if (matT == 2) {
        bne     $t1, 2, get_mat3
#         matTrabajo = &mat2;
        la      $s0, mat2
#         continue;  // volvemos al principio del bucle
        j       while
#       }
get_mat3:
#       if (matT == 3) {
        bne     $t1, 3, get_mat4
#         matTrabajo = &mat3;
        la      $s0, mat3
#         continue;  // volvemos al principio del bucle
        j       while
#       }
get_mat4:
#       if (matT == 4) {
        bne     $t1, 4, get_mat5
#         matTrabajo = &mat4;
        la      $s0, mat4
#         continue;  // volvemos al principio del bucle
        j       while
#       }
get_mat5:
#       if (matT == 5) {
        bne     $t1, 5, get_mat6
#         matTrabajo = &mat5;
        la      $s0, mat5
#         continue;  // volvemos al principio del bucle
        j       while
#       }
get_mat6:
#       if (matT == 6) {
        bne     $t1, 6, incorrecta_get
#         matTrabajo = &mat6;
        la      $s0, mat6
#         continue;  // volvemos al principio del bucle
        j       while
#       }
incorrecta_get:
#       std::cout << "Numero de matriz de trabajo incorrecto\n";
        li      $v0, 4
        la      $a0, str_numMatMal
        syscall
#       continue;  // volvemos al principio del bucle
        j       while
#     }
#     // Opción 3  y  4 //////////////////////////////////////////////////////////
opt_3_4:
#     if(opcion == 3 || opcion == 4) {
        seq     $t2, $s1, 3
        seq     $t3, $s1, 4
        or      $t2, $t2, $t3
        beqz    $t2, opt_7
#       std::cout << "\nIndice de fila: ";
        li      $v0, 4
        la      $a0, str_indFila
        syscall
#       int indFil;
#       std::cin >> indFil;
        li      $v0, 5
        syscall
        move    $s2, $v0
#       if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
        bgez    $s2, fil_mayor_0
error_fila:
#         std::cerr << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
        li      $v0, 4
        la      $a0, str_errorFil
        syscall
#         continue;  // volvemos al principio del bucle
        j       while
#       }
fil_mayor_0:
        lw      $t0, nFil($s0)
        bge     $s2, $t0, error_fila            # if ((indFil >= matTrabajo->nFil))
#       std::cout << "Indice de columna: ";
        li      $v0, 4
        la      $a0, str_indCol
        syscall
#       int indCol;
#       std::cin >> indCol;
        li      $v0, 5
        syscall
        move    $s3, $v0
#       if ((indCol < 0) || (indCol >= matTrabajo->nCol)){
        bgez     $s3, col_mayor_que_0
error_columna:
#         std::cerr << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
        li      $v0, 4
        la      $a0, str_errorCol
        syscall
#         continue;  // volvemos al principio del bucle
        j       while
#       }
col_mayor_que_0:
        lw      $t1, nCol($s0)
        bge     $s3, $t1, error_columna            # if ((indCol >= matTrabajo->nCol))
#       if (opcion == 3) {
opt_3:
        beq     $s1, 4, opt_4
#         std::cout << "Nuevo valor para el elemento: ";
        li      $v0, 4
        la      $a0, str_nuevoValor
        syscall
#         float valor;
#         std::cin >> valor;
        li      $v0, 6
        syscall
        mov.s   $f20, $f0
#         change_elto(matTrabajo, indFil, indCol, valor);
        move    $a0, $s0
        move    $a1, $s2
        move    $a2, $s3
        mov.s   $f12, $f20

        jal     change_elto
#       }
        j       while
#       if(opcion == 4) {
opt_4:
#         intercambia(matTrabajo, indFil, indCol);
        move $a0, $s0
        move $a1, $s2
        move $a2, $s3

        addiu   $sp, $sp, -4
        sw      $s0, 0($sp)

        jal     intercambia

        lw      $s0, 0($sp)
        addiu   $sp, $sp, 4
#       }

#       continue;
        j       while
#     }

#     // Opción 7 ////////////////////////////////////////////////////////////
opt_7:
#     if(opcion == 7) {
        bne     $s1, 7, incorrecta_opt
#       float valorMin;
        li.s    $f21, 0.0
#       int filaMin;
        li      $s4, 0
#       int columnaMin;
        li      $s5, 0
#       std::tie(valorMin, filaMin, columnaMin) = find_min(matTrabajo);
        move    $a0, $s0

        addiu   $sp, $sp, -4
        sw      $s0, 0($sp)

        jal     find_min

        lw      $s0, 0($sp)
        addiu   $sp, $sp, 4

        mov.s   $f21, $f0
        move    $s4, $v0
        move    $s5, $v1

#       std::cout << "\nEl valor minimo esta en (" << filaMin << ','
        li      $v0, 4
        la      $a0, str_valMin
        syscall

        li      $v0, 1
        move    $a0, $s4
        syscall

        li      $v0, 11
        li      $a0, 44
        syscall

#         << columnaMin <<") con valor " << valorMin;
        li      $v0, 1
        move    $a0, $s5
        syscall

        li      $v0, 4
        la      $a0, str_conValor
        syscall

        mov.s   $f12, $f21
        li      $v0, 2
        syscall
#       continue;
        j       while
#     }

#     // Opción Incorrecta ///////////////////////////////////////////////////////
incorrecta_opt:
#     std::cout << "Error: opcion incorrecta\n";
        li      $v0, 4
        la      $a0, str_errorOpc
        syscall

        j       while
#   }
end_while:
#   std::cout << "\nTermina el programa\n";
        li      $v0, 4
        la      $a0, str_termina
        syscall
# }
        li      $v0, 10
        syscall