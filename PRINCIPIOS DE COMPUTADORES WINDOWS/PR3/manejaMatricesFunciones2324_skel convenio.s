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
str_coma: .asciiz ","
str_espacio: .asciiz " "
str_matx: .asciiz "x"

#Para escoger si una variable es temporal o salvada debemos preguntar: ¿Hay syscall de por medio?

.text
#// Solución PR3 curso 23-24
#// Manejo de matrices con funciones.
#// Autor: Marco Aguiar Álvarez
#// Fecha: 2024-03-21

##include <iostream>
##include <iomanip>
##include <cmath>
##include <tuple>

#typedef struct {
  #int nFil;
  #int nCol;
  #float elementos[];
#} structMat;


#structMat mat1 {
  #6,
  #6,
  #{
    #11.11, 12.12, 13.13, 14.14, 15.15, 16.16,
    #21.21, 22.22, 23.23, 24.24, 25.25, 26.26,
    #31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
    #41.41, 42.42, 43.43, 44.44, 45.45, 46.46,
    #51.51, 52.52, 53.53, 54.54, 55.55, 56.56,
    #61.61, 62.62, 63.63, 64.64, 65.65, 66.66
  #}
#};

#structMat mat2 {
  #7,
  #10,
  #{
    #-36.886, -58.201,  78.671,  19.092, -50.781,  33.961, -59.511, 12.347,  57.306,  -1.938,
    #-86.858, -81.852,  54.623, -22.574,  88.217,  64.374,  52.312, 47.918, -83.549,  19.041,
     #4.255, -36.842,  82.526,  27.394,  56.527,  39.448,  18.429, 97.057,  76.933,  14.583,
    #67.79 ,  -9.861, -96.191,  32.369, -18.494, -43.392,  39.857, 80.686, -36.87 , -17.786,
    #30.073,  89.938,  -6.889,  64.601, -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524,
    #84.323, -51.718,  93.127, -10.757,  32.119,  98.214,  69.471, 73.814,   3.724,  57.208,
    #-41.528, -17.458, -64.226, -71.297, -98.745,   7.095, -79.112, 33.819,  63.531, -96.181
  #}
#};

#structMat mat3 {
  #1,
  #8,
  #{
    #-36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61
  #}
#};

#structMat mat4 {
  #16,
  #1,
  #{ -90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3 ,
    #-96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83 }
#};

#structMat mat5 {
  #1,
  #1,
  #{ 78.98 }
#};

#structMat mat6 {
  #0,
  #0,
  #{ 0 }
#};

#float infinito = INFINITY;

#void print_mat(structMat* mat) {
  #int nFil = mat->nFil;
  #int nCol = mat->nCol;
  #float* elem = mat->elementos;
  #std::cout << "\n\nLa matriz tiene dimension " << nFil << 'x' << nCol << '\n';
  #for(int f = 0; f < nFil; f++) {
    #for(int c = 0; c < nCol; c++) {
      #std::cout << elem[f*nCol + c] << ' ';
    #}
    #std::cout << '\n';
  #}
  #std::cout << '\n';
#}

#void change_elto(structMat* mat, int indF, int indC, float valor) {
  #int numCol = mat->nCol;
  #mat->elementos[indF * numCol + indC] = valor;
#}

#void swap(float* e1, float* e2) {
  #float temp1 = *e1;
  #float temp2 = *e2;
  #*e1 = temp2;
  #*e2 = temp1;
#}

#void intercambia(structMat* mat, int indF, int indC) {
  #int numCol = mat->nCol;
  #int numFil = mat->nFil;
  #float* datos = mat->elementos;
  #float* e1 = &datos[indF * numCol + indC];
  #float* e2 = &datos[(numFil - indF - 1) * numCol + (numCol - indC - 1)];
  #swap(e1, e2);
#}

#std::tuple<float, int, int> find_min(structMat* mat) {
  #int numCol = mat->nCol;
  #int numFil = mat->nFil;
  #float* datos = mat->elementos;
  #float min = infinito;
  #int fmin = -1;
  #int cmin = -1;
  #for(int f = 0; f < numFil; f++) {
    #for(int c = 0; c < numCol; c++) {
      #float valor = datos[f * numCol + c];
      #if (valor < min) {
        #min = valor;
        #fmin = f;
        #cmin = c;
      #}
    #}
  #}
  #return {min, fmin, cmin};
#}

#int main() {
  #std::cout << std::fixed << std::setprecision(8);  // Ignorar
  #std::cout << "\nComienza programa manejo matrices con funciones\n";

  #structMat* matTrabajo = &mat1;
  #while(true) {
    #print_mat(matTrabajo);
    #std::cout <<
    #"(0) Terminar el programa\n"
    #"(1) Cambiar la matriz de trabajo\n"
    #"(3) Cambiar el valor de un elemento\n"
    #"(4) Intercambiar un elemento con su opuesto\n"
    #"(7) Encontrar el minimo\n"
    #"\nIntroduce opción elegida: ";

    #int opcion;
    #std::cin >> opcion;


    #if(opcion == 0) {
      #break;
    #}

    #// Opción 1 ////////////////////////////////////////////////////////////
    #if(opcion == 1) {
      #std::cout << "\nElije la matriz de trabajo (1..6): ";
      #int matT;
      #std::cin >> matT;
      #if (matT == 1) {
        #matTrabajo = &mat1;
        #continue;  // volvemos al principio del bucle
      #}
      #if (matT == 2) {
        #matTrabajo = &mat2;
        #continue;  // volvemos al principio del bucle
      #}
      #if (matT == 3) {
        #matTrabajo = &mat3;
        #continue;  // volvemos al principio del bucle
      #}
      #if (matT == 4) {
        #matTrabajo = &mat4;
        #continue;  // volvemos al principio del bucle
      #}
      #if (matT == 5) {
        #matTrabajo = &mat5;
        #continue;  // volvemos al principio del bucle
      #}
      #if (matT == 6) {
        #matTrabajo = &mat6;
        #continue;  // volvemos al principio del bucle
      #}
      #std::cout << "Numero de matriz de trabajo incorrecto\n";
      #continue;  // volvemos al principio del bucle
    #}

    #// Opción 3  y  4 //////////////////////////////////////////////////////////
    #if(opcion == 3 || opcion == 4) {
      #std::cout << "\nIndice de fila: ";
      #int indFil;
      #std::cin >> indFil;
      #if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
        #std::cerr << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
        #continue;  // volvemos al principio del bucle
      #}
      #std::cout << "Indice de columna: ";
      #int indCol;
      #std::cin >> indCol;
      #if ((indCol < 0) || (indCol >= matTrabajo->nCol)){
        #std::cerr << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
        #continue;  // volvemos al principio del bucle
      #}

      #if (opcion == 3) {
        #std::cout << "Nuevo valor para el elemento: ";
        #float valor;
        #std::cin >> valor;
        #change_elto(matTrabajo, indFil, indCol, valor);
      #}
      #if(opcion == 4) {
        #intercambia(matTrabajo, indFil, indCol);
      #}

      #continue;
    #}

  ##  // Opción 7 ////////////////////////////////////////////////////////////
  ##  if(opcion == 7) {
  ##    float valorMin;
 ##     int filaMin;
 ##     int columnaMin;
##   std::tie(valorMin, filaMin, columnaMin) = find_min(matTrabajo);
  ##    std::cout << "\nEl valor minimo esta en (" << filaMin << ','
 ##      << columnaMin <<") con valor " << valorMin;
  ##    continue;
##    }

    ##// Opción Incorrecta ///////////////////////////////////////////////////////
   ## std::cout << "Error: opcion incorrecta\n";
  ##}
 ## std::cout << "\nTermina el programa\n";
##}


# FUNCIONES ####################################################################
#Funcion para imprimir las matrices por pantalla
print_mat:

	lw $s0, 0($a0) #Numero de filas
	lw $s1, 4($a0) #Numero de columnas
	addi $s2, $a0, 8 #Primera direccion de los elementos

	addi $sp, $sp, -4
	sw $ra, 0($sp)

	#Imprimimos la dimension de la matriz
	li $v0, 4
	la $a0, str_matTiene
	syscall

	li $v0, 1
	move $a0, $s0 
	syscall
	li $v0, 4
	la $a0, str_matx
	syscall
	li $v0, 1
	move $a0, $s1
	syscall

	li $v0, 11
	la $a0, LF
	syscall

	ble $s0, $zero, fin_bucle_imprimir
	ble $s1, $zero, fin_bucle_imprimir

	#Imprimimos los elementos de la matriz
	mul $s3, $s1, $s0 #Tamaño de la matriz
	li $s4, 0 #Indice de los elementos
	li $s5, 0 #Indice de columnas
	j bucle_imprimir

	salto_linea:
	li $v0, 11
	la $a0, LF
	syscall
	li $s5, 0 #Reiniciamos el contador de columnas

	j comprobar_fin

	bucle_imprimir:
	lwc1 $f20, 0($s2)
	li $v0, 2
	mov.s $f12, $f20
	syscall
	li $v0, 4
	la $a0, str_espacio
	syscall

	add $s5, $s5, 1
	beq $s5, $s1, salto_linea

	comprobar_fin:
	add $s4, $s4, 1
	addu $s2, $s2, 4
	blt $s4, $s3, bucle_imprimir

	fin_bucle_imprimir:
	#Limpiamos todos los registros usados

	lw $ra, 0($sp)
	addi $sp, $sp, 4

print_mat_fin: jr $ra

#Funcion para cambiar un elemento de una matriz

change_elto:

	lw $t0, 0($a0) #Numero de filas
	lw $t1, 4($a0) #Numero de columnas
	addi $t5, $a0, 8 #Dirrecion del primer elemento de la columna 
	  


	mul $t4, $a1, $t1 # indiceFila * nCol
	addu $t4, $t4, $a2 #indFila * nCol + indCol
	mul $t4, $t4, 4 #(indFila * nCol + indCol) * tamaño_elemento
	addu $t4, $t4, $t5 #Direccion de mat1[indFila, indCol]	

	#Cargamos el nuevo valor del elemento
	swc1 $f12, 0($t4)
	# Retorno de la función
change_elto_fin: jr $ra

#Funcion para intercambiar el contenido de dos posiciones de memorias en las que se encuentra un float 
swap:


	# Guardar los parámetros en registros
	# a1 = dirección del primer elemento
	# a2 = dirección del segundo elemento	
	lwc1 $f4, 0($a0) #Cargamos el primer elemento
	lwc1 $f6, 0($a1) #Cargamos el segundo elemento

	swc1 $f6, 0($a0) #Cargamos el segundo elemetno en la primera posicion 
	swc1 $f4, 0($a1) #Cargamos el primer elemento en la seguna posicion

	# Retorno de la función
swap_fin: jr $ra


#Funcion para intercambiar un elemento con su opuesto

intercambia:
	#Calculamos la direccion del elemento que introdujo el usuario
	
	lw $t0, 0($a0) #Numero de filas
	lw $t1, 4($a0) #Numero de columnas
	addi $t5, $a0, 8 #Dirrecion del primer elemento de la columna 

	mul $t4, $a1, $t1 # indiceFila * nCol
	addu $t4, $t4, $a2 #indFila * nCol + indCol
	mul $t4, $t4, 4 #(indFila * nCol + indCol) * tamaño_elemento
	addu $t4, $t4, $t5 #Direccion de mat1[indFila, indCol]


	#Calculamos la direccion del elemento opuiesto
	sub $t6, $t0, $a1 #nFil - nf
	sub $t6, $t6, 1 #nfil - nf - 1
	sub $t7, $t1, $a2 #nCol - nc
	sub $t7, $t7, 1 #nCol - nc - 1

	mul $t8, $t6, $t1 # indiceFila * nCol
	addu $t8, $t8, $t7 #indFila * nCol + indCol
	mul $t8, $t8, 4 #(indFila * nCol + indCol) * tamaño_elemento
	addu $t8, $t8, $t5 #Direccion de mat1[indFila, indCol]

	#Llamamos a la funcion que intercambia los elementos
	addi $sp, $sp, -4
	sw $ra, 0($sp)

	move $a0, $t4
	move $a1, $t8
	jal swap

	lw $ra, 0($sp)
	addi $sp, $sp, 4
	
intercambia_fin: jr $ra	
	
#Funcion para encontrar el minimo de una matriz
find_min:
	lw $t0, 0($a0) #Numero de filas
	lw $t1, 4($a0) #Numero de columnas
	addi $t5, $a0, 8 #Primera direccion de los elementos
	beqz $t0, error
	j cargar_parametros

	error:
	l.s $f0, infinito
	li $v0, -1
	li $v1, -1
	j find_min_fin

	cargar_parametros:
	l.s $f0, infinito #Inicializamos el minimo a infinito
	li $t2, 0 #Indice de fila
	li $t3, 0 #Indice de columna
	j bucle1

	guardar_minimo:
	mov.s $f0, $f1
	move $v0, $t2
	move $v1, $t3
	j actualizar_direccion
	

	bucle1: 
	move $t3, $zero #reiniciamos el contador de columnas

	bucle2:
	mul $t4, $t2, $t1 # indiceFila * nCol
	addu $t4, $t4, $t3 #indFila * nCol + indCol
	mul $t4, $t4, 4 #(indFila * nCol + indCol) * tamaño_elemento
	addu $t4, $t4, $t5 #Direccion de mat1[indFila, indCol]
	lwc1 $f1, 0($t4) #Cargamos el primer elemento 
	c.lt.s $f1, $f0
	bc1t guardar_minimo

	actualizar_direccion:
	addi $t3, $t3, 1 #Calculo la siguiene columna
	blt $t3, $t1, bucle2

	addi $t2, $t2, 1 #Calculo la siguiente fila
	blt $t2, $t0, bucle1

find_min_fin: jr $ra

#Funcion para encontrar el minimo de una matriz y devolver el valor y los indices
main: 
	li $v0, 4
	la $a0, str_titulo
	syscall

	la $s0, mat1

bucle_menu:

	addi $sp, $sp, -4
	sw $s0, 0($sp)

	move $a0, $s0
	jal print_mat

	lw $s0, 0($sp)
	addi $sp, $sp, 4

	li $v0, 11
	la $a0, LF
	syscall	

	li $v0, 4
	la $a0, str_menu
	syscall

	li $v0, 5
	syscall
	move $t0, $v0


	#Comprobamos que opcion escogio el usuario
	beq $t0, 0, salir_programa
	beq $t0, 1, cambiar_matriz_de_trabajo
	beq $t0, 3, cambiar_elemento
	beq $t0, 4, intercambiar_opuesto
	beq $t0, 7, encontrar_minimo


	#Comprobamos que el la opcion elegida sea valida
	bltz $t0, opcion_error
	bgt $t0, 7, opcion_error
	beq $t0, 2, opcion_error
	beq $t0, 5, opcion_error
	beq $t0, 6, opcion_error

	opcion_error:
	#Imprime por pantalla mensaje de error
	li $v0, 4
	la $a0, str_errorOpc
	syscall

	li $v0, 11
	la $a0, LF
	syscall
	
	j bucle_menu

salir_programa: 
	li $v0, 4
	la $a0, str_termina
	syscall

	li $v0, 10
	syscall

cambiar_matriz_de_trabajo: 
	#Pedimos al usuario que matriz quiere cambiar
	li $v0, 4
	la $a0, str_elijeMat
	syscall 

	li $v0, 5
	syscall
	move $t1, $v0

	#Comprobamos que la opcion escogida esta dentro del rango posble
	blt $t1, 1, error_matriz
	bgt $t1, 6, error_matriz

	#Comprobamos la opcion escogida por el usuario
	beq $t1, 1, mat1_selected
	beq $t1, 2, mat2_selected
	beq $t1, 3, mat3_selected
	beq $t1, 4, mat4_selected
	beq $t1, 5, mat5_selected
	beq $t1, 6, mat6_selected

	#Imprimimos la matriz escogida
	mat1_selected:
	la $s0, mat1
	j bucle_menu

	mat2_selected:
	la $s0, mat2
	j bucle_menu

	mat3_selected:
	la $s0, mat3
	j bucle_menu
	
	mat4_selected:
	la $s0, mat4
	j bucle_menu

	mat5_selected:
	la $s0, mat5
	j bucle_menu
	
	mat6_selected:
	la $s0, mat6
	j bucle_menu


	error_matriz:
	li $v0, 4
	la $a0, str_numMatMal
	syscall
	j bucle_menu

cambiar_elemento:
	#Pedimos al usuario que elemento quiere cambiar
	li $v0, 4
	la $a0, str_indFila
	syscall

	li $v0, 5
	syscall
	move $s1, $v0 

	#Comprobamos que el indice introducido sea valido
	lw $t2, 0($s0)
	bge $s1, $t2, error_indice_fila
	bltz $s1, error_indice_fila

	li $v0, 4
	la $a0, str_indCol
	syscall

	li $v0, 5
	syscall
	move $s2, $v0

	#Comprobamos que el indice introducido sea valido
	lw $t2, 4($s0)
	bge $s2, $t2, error_indice_columna	
	bltz $s2, error_indice_columna

	li $v0, 4
	la $a0, str_nuevoValor
	syscall

	li $v0, 6
	syscall
	mov.s $f12, $f0

	#Llamamos a la funcion que cambia el elemento
	move $a0, $s0
	move $a1, $s1
	move $a2, $s2

	jal change_elto

	j bucle_menu

	error_indice_fila:
	li $v0, 4
	la $a0, str_errorFil
	syscall

	j bucle_menu

	error_indice_columna:
	li $v0, 4
	la $a0, str_errorCol
	syscall

	j bucle_menu

intercambiar_opuesto:
	#Pedimos al usuario que elemento quiere intercambiar
	li $v0, 4
	la $a0, str_indFila
	syscall 	

	li $v0, 5
	syscall
	move $s1, $v0

	#Comprobamos que el indice introducido sea valido
	lw $t2, 0($s0)
	bge $s1, $t2, error_indice_fila
	bltz $s1, error_indice_fila

	li $v0, 4
	la $a0, str_indCol
	syscall


	li $v0, 5
	syscall
	move $s2, $v0

	#Comprobamos que el indice introducido sea valido
	lw $t2, 4($s0)
	bge $s2, $t2, error_indice_columna	
	bltz $s2, error_indice_columna

	#Cargamos los parametros que se le pasan a la funcion 
	move $a0, $s0 #Direccion de la Mat seleccionada
	move $a1, $s1 #Fila del elemento a cambiar
	move $a2, $s2 #Columna del elemento a cambiar

	jal intercambia
	
	j bucle_menu

encontrar_minimo:


	#Imprimimos el resultado
	li $v0, 4
	la $a0, str_valMin
	syscall

	#Llamamos a la funcion que encuentra el minimo
	move $a0, $s0
	jal find_min
	move $t1, $v0
	move $s1, $v1
	mov.s $f20, $f0

	li $v0, 1
	move $a0, $t1
	syscall

	li $v0, 4
	la $a0, str_coma
	syscall

	li $v0, 1
	move $a0, $s1
	syscall

	li $v0, 4
	la $a0, str_conValor
	syscall

	li $v0, 2
	mov.s $f12, $f20
	syscall

	j bucle_menu