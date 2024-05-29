#include <iostream>

template <class T> bool matrix_t<int>::is_estocastica() {
    matrix_t M;
    int suma_columnas{0};
    int estocastica{1};

// Comprobacion para ver si la matriz tiene valores negativos
    for(int i = 0; i < TAM_M; i++)
        for (int j = 0; j < TAM_M; j++)
            if (M[i][j] < 0) {
                estocastica = 0;
            }

// Comprobacion de que todas las columnas sumen 1
    for(int i = 0; i < TAM_M; i++) {
        suma_columnas = 0;
        for (int j = 0; j < TAM_M; j++){
            suma_columnas += M[j][i];
        }
        if(suma_columnas != 1) {
            estocastica = 0;
        } 
    }

    return estocasotca;
}


bool is_palindrome(const vector_t<char>& s, const int i, const int d) {
    if (s[i] != s[d] || i > d) return false;
    else return is_palindrome(s, i + 1, d - 1);
}