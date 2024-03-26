.data
    mat1: .word 2, 3, 1, 4, 5, 6, 7, 8, 9
    mat2: .word 1, 2, 3, 4, 5, 6, 7, 8, 9
    mat3: .word 9, 8, 7, 6, 5, 4, 3, 2, 1

 # Datos de cadena
str_title: .asciiz "Programa en MIPS para trabajar con matrices\n"
str_menu: .asciiz "Menú:\n(0) Terminar el programa\n(1) Cambiar la matriz de trabajo\n(3) Cambiar el valor de un elemento\n(4) Intercambiar un elemento con su opuesto\n(7) Encontrar el mínimo\n"
str_mat_num: .asciiz "Introduce el número de matriz (1, 2 o 3): "
str_row_idx: .asciiz "Introduce el índice de fila: "
str_col_idx: .asciiz "Introduce el índice de columna: "
str_new_val: .asciiz "Introduce el nuevo valor: "
str_fil: .asciiz "Número de filas: "
str_col: .asciiz "Número de columnas: "
str_space: .asciiz " "
str_nl: .asciiz "\n"
str_min_val: .asciiz "El valor mínimo es: "
str_min_row: .asciiz "Índice de fila del mínimo: "
str_min_col: .asciiz "Índice de columna del mínimo: "

.text

# Función print_mat
print_mat:
    # Cargar los parámetros
    lw $t0, 0($a0)   # nFil
    lw $t1, 4($a0)   # nCol
    addi $t2, $a0, 8 # Dirección de los elementos

    # Imprimir encabezado
    li $v0, 4
    la $a0, str_fil
    syscall
    move $a0, $t0
    li $v0, 1
    syscall
    la $a0, str_col
    li $v0, 4
    syscall
    move $a0, $t1
    li $v0, 1
    syscall

    # Imprimir elementos
    la $a0, str_space
    li $v0, 4
    move $t3, $t0 # Contador de filas
    loop_fil:
        move $t4, $t1 # Contador de columnas
        loop_col:
            lw $t2, 0($t2)
            li $v0, 2
            syscall
            addi $t2, $t2, 4
            addi $t4, $t4, -1
            bgtz $t4, loop_col
            la $a0, str_nl
            li $v0, 4
            syscall
        addi $t3, $t3, -1
        bgtz $t3, loop_fil

    jr $ra
print_mat_fin:

# Función change_elto
change_elto:
    # Cargar los parámetros
    lw $t0, 0($a0)   # nFil
    lw $t1, 4($a0)   # nCol
    addi $t2, $a0, 8 # Dirección de los elementos
    move $t3, $a1    # Índice de fila
    move $t4, $a2    # Índice de columna
    lwc1 $f0, 0($a3) # Nuevo valor

    # Calcular la dirección del elemento a modificar
    mul $t5, $t3, $t1
    add $t5, $t5, $t4
    sll $t5, $t5, 2
    add $t5, $t5, $t2

    # Modificar el elemento
    swc1 $f0, 0($t5)

    jr $ra
change_elto_fin:

# Función swap
swap:
    # Cargar los parámetros
    lwc1 $f0, 0($a0) # Primer número
    lwc1 $f1, 0($a1) # Segundo número

    # Intercambiar los números
    swc1 $f1, 0($a0)
    swc1 $f0, 0($a1)

    jr $ra
swap_fin:

# Función intercambia
intercambia:
    # Cargar los parámetros
    lw $t0, 0($a0)   # nFil
    lw $t1, 4($a0)   # nCol
    addi $t2, $a0, 8 # Dirección de los elementos
    move $t3, $a1    # Índice de fila
    move $t4, $a2    # Índice de columna

    # Calcular las posiciones a intercambiar
    sub $t5, $t0, $t3
    sub $t5, $t5, 1
    sub $t6, $t1, $t4
    sub $t6, $t6, 1

    # Calcular las direcciones de memoria
    mul $t7, $t3, $t1
    add $t7, $t7, $t4
    sll $t7, $t7, 2
    add $t7, $t7, $t2

    mul $t8, $t5, $t1
    add $t8, $t8, $t6
    sll $t8, $t8, 2
    add $t8, $t8, $t2

    # Intercambiar los elementos
    jal swap
    move $a0, $t7
    move $a1, $t8
    jal swap

    jr $ra
intercambia_fin:

# Función find_min
find_min:
    # Cargar los parámetros
    lw $t0, 0($a0)   # nFil
    lw $t1, 4($a0)   # nCol
    addi $t2, $a0, 8 # Dirección de los elementos

    # Inicializar el mínimo
    lwc1 $f0, 0($t2) # Primer elemento
    move $t3, $zero  # Índice de fila del mínimo
    move $t4, $zero  # Índice de columna del mínimo

    # Buscar el mínimo
    move $t5, $t0 # Contador de filas
    loop_filas:
        move $t6, $t1 # Contador de columnas
        loop_columnas:
            lwc1 $f1, 0($t2)
            c.lt.s $f1, $f0
            bc1t update_min
            addi $t2, $t2, 4
            addi $t6, $t6, -1
            bgtz $t6, loop_columnas
        addi $t2, $t2, 4
        addi $t5, $t5, -1
        bgtz $t5, loop_filas

    # Devolver el mínimo y sus índices
    mov.s $f2, $f0
    move $v1, $t3
    move $a0, $t4

    jr $ra
find_min_fin:

main:
    # Imprimir título
    la $a0, str_title
    li $v0, 4
    syscall

    # Inicializar matriz de trabajo
    la $a0, mat1
    jal print_mat

    # Bucle principal
    loop:
        # Mostrar menú
        la $a0, str_menu
        li $v0, 4
        syscall

        # Leer opción
        li $v0, 5
        syscall
        move $t0, $v0

        # Realizar acción según la opción seleccionada
        beq $t0, 0, exit
        beq $t0, 1, change_matriz
        beq $t0, 3, change_elemento
        beq $t0, 4, intercambiar
        beq $t0, 7, find_mininimo

        j loop

    # Salir del programa
    exit:
        li $v0, 10
        syscall

    # Cambiar la matriz de trabajo
    change_matriz:
        # Leer número de matriz
        la $a0, str_mat_num
        li $v0, 4
        syscall
        li $v0, 5
        syscall
        move $t0, $v0

        # Actualizar dirección de la matriz de trabajo
        beq $t0, 1, mat1_selected
        beq $t0, 2, mat2_selected
        beq $t0, 3, mat3_selected

        j change_mat

        mat1_selected:
            la $a0, mat1
            j print_mat
        mat2_selected:
            la $a0, mat2
            j print_mat
        mat3_selected:
            la $a0, mat3
            j print_mat

    # Cambiar el valor de un elemento
    change_elemento:
        # Leer índices
        la $a0, str_row_idx
        li $v0, 4
        syscall
        li $v0, 5
        syscall
        move $t0, $v0

        la $a0, str_col_idx
        li $v0, 4
        syscall
        li $v0, 5
        syscall
        move $t1, $v0

        # Leer nuevo valor
        la $a0, str_new_val
        li $v0, 4
        syscall
        li $v0, 6
        syscall
        mov.s $f0, $f0

        # Modificar el elemento
        la $a0, mat1
        move $a1, $t0
        move $a2, $t1
        mov.s $f2, $f0
        jal change_elto

        j print_mat

    # Intercambiar un elemento con su opuesto
    intercambiar:
        # Leer índices
        la $a0, str_row_idx
        li $v0, 4
        syscall
        li $v0, 5
        syscall
        move $t0, $v0

        la $a0, str_col_idx
        li $v0, 4
        syscall
        li $v0, 5
        syscall
        move $t1, $v0

        # Intercambiar el elemento
        la $a0, mat1
        move $a1, $t0
        move $a2, $t1
        jal intercambia

        j print_mat

    # Encontrar el mínimo
    find_mininimo:
        # Encontrar el mínimo
        la $a0, mat1
        jal find_min

        # Imprimir el mínimo
        la $a0, str_min_val
        li $v0, 4
        syscall
        mov.s $f12, $v0
        li $v0, 2
        syscall

        la $a0, str_min_row
        li $v0, 4
        syscall
        move $a0, $v1
        li $v0, 1
        syscall

        la $a0, str_min_col
        li $v0, 4
        syscall
        move $a0, $a0
        li $v0, 1
        syscall

        j print_mat

