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
    if ( i >= d) return false;
    else return s[i] == s[d] && is_palindrome(s, i + 1, d - 1);
}






template<class T> class stack_sll_t {
    private:
    sll_t<T> lista;

    public:
    //Metodo Push
    
    push();
    pop();
    Top();
    Emtpy();

};


template<class T> void stack_sll_t::push(const &T dato) const {
    sll_node_t<T>* aux = new sll_node_t<T>(node);  
    lista.insert_head(aux);
}

template<class T> void stack_sll_t::pop() const {
    lista.extract_head();
}


template<class T> const T& stack_sll_t::Top() const {
    return lista.get_head()->get_data();
}

template<class T> bool stack_sll_t::Empy() {
    return lista.empty();
}



int sumaElementos(stack_t<int>& p) {
    int suma;
    if (p.empty()) return suma;
    else {
        suma = p.top();
        p.pop();
        return suma + sumaElementos(p);
    }

}




// Julio 2023

bool matrix_t<int>::is_estocastica() {
    assert (m_ == n_);
    for (int i{0}; i <= m_; i++)
      for (int j{0}; j <= n_; j++)
        if (Matrix[i][j] < 0 ) return false;

    int suma {0}
    for (int i{0}; i <= n_; i++){
      suma = 0; 
      for (int j{0}; j <= m_; j++) {
      suma += Matrix[j][i];
      }
      if (suma != 1 ) return false;
    }
    return true;
}   




bool is_palindorme(const vector_t<char>& s, const int i, const int d) {
    if (i >= d) return true;
    else return (s[i] == s[d] && is_palindorme(s, i + 1, d - 1));
}



void merge (dll_t<int>& L1, dll_t<int>& L2, dll_t<int>& R) {
    dll_node_t<int>* aux1 = L1.get_head(), aux2 = L2.get_head();

    while (aux1 != NULL && aux2 != NULL) {
      if(aux1->get_data() <= aux->get_data()) {
        R.inser_tail(new dll_node_t<int>(aux1->get_data()));
        aux1->get_next();
      } else {
        R.insert_tail(new dll_node_t<int>(aux2->get_data()));
        aux2->get_next();
      }
    }
    while (aux1 != NULL) {
        R.insert_tail(new dll_node_t<int>(aux1->get_data))
        aux1->get_next();
    }
    while (aux2 != NULL) {
        R.insert_tail(new dll_node_t<int>(aux2->get_data))
        aux2->get_next();
    }
    
}



// Junio 2023

// EJERCICIO 1
vector<int> rotate(const vector_t<int>& v, const int r) {
    vector_t<int> aux(v.get_size());
    for (int i{0}; i < v.size(); i++) {
        aux[i + r % v.size()] = v[i];
    }
    return aux;
}

// EJERCICIO 2 Y O H A G O Y O G A H O Y
bool es_palindroma(const vector_t<char>& cadena) {
    int longitud;
    stack_v_l<char> pila; 
    (cadena.size() % 2 == 0) ? longitud = cadena.size() / 2 : longitud = cadena.size() / 2 - 1; 

    for (int i{0}; i <= longitud; i++) {
        pila.push(cadena[i]);
    }

    while (!pila.empty()) {
        if (pila.top() != cadena[longitud++]) return false;
        pila.pop();
    }

    return true;
} 

// EJERCICIO 3 Generar todas lasd cadenas binario longitud n 

void all_bin(const vector<char>& binario, const int i = 0) {

    if (i == binario.size()) {
        std::cout << binario << " " 
    } else {
        for (j{0}; j <= BINARIO_SIZE; j++) {
            binario[i] == BINARIO_SIZE[j];
            all_bin(binario, i + 1);
        }
    }
}


// EJERCICIO 4

dll_node_t<int>* dll_t<int>::find(const int v) {
    dll_node_t<int>* aux = get_head();
    while (aux != NULL && aux->get_data() != v) {
        aux->get_next();
    }
    return aux;
} 


//EJERCICIO 5

template <class T> void sll_l<T>::erase_evens() {

    sll_node_t<T>* aux = get_head()->get_next();
    delete extract_head();
    while (aux != NULL && aux->get_next() != NULL ){
        delete extract_after(aux);
        aux->get_next();
    }
}


//EJERCICIO 6

int Ackerman (int x, int y) {
    if (x = 0) return y + 1;
    else if (y = 0) return Ackerman( x - 1, 1);
    else  return Ackerman(x - 1, Ackerman(x, y - 1));
}



// Exmanen mayo 2023


// EJERCICIO 1:

class stack_sll_t {

    private:
        sll_t<T> lista_;
}

// Push();

template<class T> void stack_sll_t::push(const T& dato) {
    sll_node_t<T>* nodo = new sll_node_t<T>(dato);
    lista_.insert_head(nodo);
}

// Pop();

template <class T> void stack_sll_t::pop() {
   delete lista_.extract_head();
}

template <class T> T stack_sll_t::top() {
    return lista_.get_head()->get_data();
}

template <class T> bool stack_sll_t::empty() {
    return lista_.empty();
}


// EJERCICIO 2

int sumaElementos(stack_t<int>& p) {
    int cima;
    if (p.empty()) return 0;
    else {
       cima = p.top();
       p.pop();
       return cima += sumaElementos(p); 
    }

}

// EJERCICIO 3

void sll_union(const sll_t<int> A, const sll_t<int> B, sll_t<int> C) {
    sll_node_t* aux = A.get_head();
    sll_node_t* aux2 = B.get_head();    

    while (aux != NULL) {
        if (B.search(aux->get_data()) == NULL) C.insert_head(new sll_node_t<int>(aux->get_data()));
        aux->get_next();
    }
    while (aux2 != NULL) {
        C.insert_head(new sll_node_t<int>(aux2->get_data()));
        aux2->get_next();
    }
    

}


//EJERCICIO 4

void to_base(const unsigned n, const unsigned short b, queue_t<unsigned>& q) {

    if (n < b ) {
    q.push_front(n);
    } else {
        to_base(n / b, b, q);
        q.push_front(n % b);
    }
}

//EJERCICIO 5 

block_t op1(const block_t A, const block_t B, const block t_C) {

    return ((A & B) | (A & C) | (B & C)) & ~(A & (B & C));
}


// EXAMEN Junio 2019

//EJERCICIO 1 apartado a; 
sll_t<T>::~sll_t(void) {
    while (head_ != NULL) {
    sll_node_t<T>* aux = head_;
        set_head(aux->get_next());
        delete aux;
    }

}

//EJERCICIO 1 apartado b
sll_t<T>::~sll_t(void) { destroy(head_);
}

sll_l<T>::destroy(sll_node_t<T>* nodo) {
    if (nodo != NULL) {
    destroy(nodo->get_next());
    delete nodo;
    }
}


//EJERCICIO 2 apartado b;
conjunto_t XOR(conjunto_t A, conjunto_t B) {

    return (A | B ) | ~(A & B);
} // & | ~ and or y not respectivamente


//EJERCICIO 3 apartado a;
double vector_t<double>::scal_prod(const vector_t<double>& b) {
    assert(size() == b.size()); 
    double scal_prod;
    for (int i{0}; i < size(); i ++) {
        scal_prod += at(i) * b[i];
    }
    return scal_prod;
}

// apartado b;
double vector_t<double>::scal_prod_r(const vector_t<double>& b, int i = 0) {
    assert(size() == b.size());
    double scal_prod{0.0};
    if (i == size()) return 0;
    else return at(i) * b[i] + scal_prod_r(b, i + 1);

}

// EJERCICIO 4
int rsearch(const int* v, int i, int d, int x) {
    int c = -1;
    if (v[i] == x) return i; // En caso de que sea i o d el valor nos ahorramos todo el metodo de busqueda
    if (v[d] == x) return d;
    if (i <= d) {
        c = ( i + d ) / 2;
        if (at(c) != x) {
            const int c1 = rsearch(v, i, c - 1, x);
            const int c2 = rsearch(v, c - 1, d, x);
            (c1 != -1 ) ? c = c1 : c = c2;
        }
    }
    return c;
}

//EJERCICIO 5

template <class T>
void sll_t<T>::writeReverseStack(ostream& os) const {
    stack_t<T> aux;
    sll_node_t<T>* nodo = get_head();
    while (nodo != NULL) {
        if (nodo->get_data() % 2 == 0) aux.push(nodo->get_data());
        nodo->get_next();
    }
    while (!(aux.empty())) {
        os << aux.top();
        aux.pop();
    }
}



// EXAMEN 05 julio 2019


// EJERCICIO 1 apartado a) submartriz triangular incluyendo diagonal principal;


double matrix_t::sumaSubmatrizTriangularSuperio() {
    double suma{0.0};
    for (int i = 0; i < m_; i++)
      for (int j = i; j < n_; j++)
        suma += at(i)(j);

    return suma;
}

// Apartado b) submatriz triangular superior sin incluir diagonal principal;

double matrix_t::sumaSubmatrizTriangularSuperio() {
    double suma{0.0};
    for (int i = 0; i < m_; i++)
      for (int j = i + 1; j < n_; j++)
        suma += at(i)(j);

    return suma;
}

// apartado c) submatriz inferior incluyendo la diagonal principal

double matrix_t::sumaSubmatrizTriangularSuperio() {
    double suma{0.0};
    for (int i = 0; i < m_; i++)
      for (int j = 0; j <= i; j++)
        suma += at(i)(j);

    return suma;
}

// apartado d) submatriz inferior sin incluir la diagonal principal

double matrix_t::sumaSubmatrizTriangularSuperio() {
    double suma{0.0};
    for (int i = 1; i < m_; i++)
      for (int j = 0; j < i; j++)
        suma += at(i)(j);
    return suma;
}


// EJERCICIO 2 busqueda binaria recursiva 1 2 3 4 5 6

int BBR(const std::vector<int>& v, int i, int d, const int x ) {
    int c = - 1;
    if (i <= d) {
        c = (i + d) / 2;
        if (v[c] != x ) {
            if (v[c] < x) c = BBR (v, i, c - 1, x)
            else c = BBR (v, c + 1, d, x )
        }
    }
    return c;
}

//EJERCICO 3 busqueda binaria con un vector desordenado

int BBR(const std::vector<int>& v, int i, int d, const int x ) {
    int c = - 1;
    if (i <= d) {
        c = (i + d) / 2;
        if (v[c] != x ) {
            const int c1 = BBR (v, i, c - 1, x);
            const int c2 = BBR (v, c + 1, d, x );
            c = std::max(c1, c2);
        }
    }
    return c;
}

// EJERCIO 4 Imprimir inversamente los elementos de una lista enlaza simplemente recursivamente

void writeReverse(std::ostream& os) {
    write1(head_, os);
}

void write1(sll_node_t<T>* node, std::ostream& os) {
    if (nodo != NULL )
        write1(nodo->get_next(), os);
        os << nodo->get_data();
}


// EJERCICIO 5 recursiviada para resolver el problema de las torres de hanoi

int hanoi(int n) {
    if (n == 1 ) return 1;
    else return 2 * hanoi(i - 1) + 1;
}


// EXAMEN 12 septiembre 2019

//EJERCICIO 1 

// Apartado a Insercion por el final

template <class T> void dll_t<T>::insert_hail(dll_node_t<T>* node) {
    assert(nodo != NULL);

    if (empty()) {
        head_ = nodo;
        nodo = tail_;
    } else {
        tail_.set_next(nodo);
        nodo.set_prev(tail_);
        tail_ = nodo;
    }
    sz++;

}  

// Apartado b borrar un nodo deterninado

template <class T> void dll_t<T>::erase_node(dll_node_t<T>* nodo) {
    assert(node != NULL);

    if (nodo->get_prev() != NULL) {
        node->get_prev()->set_next(node->get_next());
    } else {
        head_ = nodo->get_next();
        head_->set_prev(NULL);
    }
    if (nodo->get_next() != NULL) {
        node->get_next()->set_prev(node->get_prev());
    } else {
        tail_ = nodo->get_prev();
        tail->set_next(NULL);
    }
    delete nodo;
}

// EJERCICIO 2 dado la siguiente funcion recursiva 

int potencia(int base, unsigned int expo) {
    if ( expo == 0) return 1;
    else return base * potencia(base, expo - 1);
}


// apartado b, desarrollar la llamada potencia(2, 5);

potencia (2, 5) = 2 * potencia (2, 5 - 1) = 2 * 2 * potencia (2, 3) = 2 * 2 * 2 * potencia(2, 2) = 2 * 2 * 2 * 2 * potencia (2, 1) 
= 2 * 2 * 2 * 2 * 2 * potencia(2, 0) = 2 * 2 * 2 * 2 * 2 * 1 = 32;


// EJERCICIO 3 apartaado a, palindromo iterativo

bool is_palindrome(const vector_t<char>& s) {
    int mitad = s.size() / 2;
    for (int i{0}, ; i < mitad; i++) {
        if(s[i] != s[s.size() - 1 - i ]) return false;    
    }
    return true;
}

//Aparatado b palindromo recursivo

bool is_palindrome(const vector_t<char>& s, int i, int d) {
if (i >= d ) return true; 
return (s[i] == s[d]) && is_palindromo(s, i + 1, d - 1);
}

//EJERCICIO 4 busqueda binaria recursiva 

int bsearch(int i, int d, const T& x) {
    int c = -1, contador = -1;
    if (i <= d) {
        c =(i + d)/ 2;
        if (at(c) != x) {
            if (at(c) < x) { 
                c = bsearch(i, c -1, x); 
                contador++;
            } else {
                c = bsearch(c + 1, d, x);
                contador++;
            }
        }
    }
    return contador;
}


//EJERCICIO 5 contar ocurrencias en una lista doblemente elazada

double eps = 1e-10;
#include <cmath>

int count(const T& x) {
    int contador = 0;
    dll_node_t<T>* aux = get_head();
    while (aux != NULL) {
        if (abs(aux->get_data() - x) < eps) contador++;
        aux->get_next();
    }
    return contador;
}

// EJERCICIO 6 fusion de dos listas ordenadas con elemento centilena, un unico for y un unico if-else

void vector_t::fusion(const vector_t& a, const vector_t& b) {

for (int i{0}, j{0}; i < a.size() && j < b.size();){
    if (a[i] < b[j]) {
            push_back(a[i]);
            i++;
        } else {
            push_back(b[j]);
            j++;
        }
    }

}


//EXAMEN 26 abril 2016

//EJERCICIO 1 mostrar por pantalla iterativamente el contenido de una lista enlazada
void sll_t<int>::write(std::ostream& os ) {
    writeDirect(head_, os);
}

void sll_l<int>::writeDirect(sll_node_t<int>* nodo, std::ostream& os) {
    if (nodo != NULL) {
        os << nodo->get_data() << " "; 
        writeDirect(nodo->get_next(), os);
    }
}

// Apartado b mostrar inversamente por pantalla

void sll_t<int>::write(std::ostream& os ) {
    writeInverse(head_, os);
}

void sll_l<int>::writeInverse(sll_node_t<int>* nodo, std::ostream& os) {
    if (nodo != NULL) {
        writeDirect(nodo->get_next(), os);
        os << nodo->get_data() << " "; 
    }
}

// apartado c Imprimir iterativamente los elementos de una lista enlazada al reves,

void sll_t<int>::writeDirect(std::ostream& os) {
    sll_node_t<T>* aux = head_;
    stack_t<int> p;
    while (aux != NULL) {
        p.push(aux->get_data());
        aux->get_next();
    }
    while (!p.empty()) {
        os << p.top() << " ";
        p.pop();
    }
    
}

// apartado d contar el numero de ocurrencias en un lista elazada

#include <cmath>

template <> int sll_t<double>::cuenta(double val, double eps) {
    sll_node_t<T>* aux = head_;
    int contador{0};
    while (aux != NULL) {
        if(abs(val - aux->get_data()) < eps) contador++;
        aux->get_next();        
    }
    return contador;
}


//EJERCICIO 2 submatrices dentro de la matriz principal

//Apartado a cantidad de 0 sin contar la diagonal principal

int matrix_t<double>::numberOfZeros(double eps) {
    int contador{0};
    for (int i = 1; i < m_; i++)
        for (int j = 0; j < i; j++) 
            if (abs(M[i][j]) < eps) contador++;

    return contador;
}

//Apartado b cantidad de elementos mayores que 0 en la triangular inferior incluyendo la diagonal principal y que sea cuadrada

int matrix_t<double>::cuentaMayorCero(const double eps) {
    assert(m_ == n_);
    int contador{0};
    for (int i = 0; i < m_; i++)
        for (int j = 0; j <= i; j++)
            if (M[i][j] > eps) contador++; 

    return contador;
}

// Apartado c devolver la ultima fila con el mayor valor de la diagonal principal

int matrix_t<int>::indiceMayorValor() {
    assert(m_ == n_);
    int aux = M[0][0];
    int indice{1};
    for (int i = 1; i < m_; i ++) {
        if (M[i][i] >= aux ) {
            indice = i;
            aux = M[i][i];
        }
    }
    return indice;

}

// Apartado d devolver la primera fila con el mayor valor de la diagonal principal

int matrix_t<int>::indiceMayorValor() {
    assert(m_ == n_);
    int aux = M[0][0];
    int indice{1};
    for (int i = 1; i < m_; i ++) {
        if (M[i][i] > aux ) {
            indice = i;
            aux = M[i][i];
        }
    }
    return indice;

}

// EJERCICIO 3 apartado a producto escalar entre dos vectores dispersos

double scalprod(const vector_pair_t& a, const vector_pair_t& b) {
    int i = 0, j = 0, a_nz = a.get_nz(), b_nz = b.get_nz();
    double scal_prod{0.0};
    while (i < a_nz && j < b_nz) {
        if (a.at(i).get_inx() == b.at(j).get_inx()) {
            scal_prod += a.at(i++).get_val() * b.at(j++).get_val();
        } else if (a.at(i).get_inx() < b.at(j).get_inx() ) {
            i++;
        } else {
            j++;
        }
    }
    return scal_prod;
}

//Apartado b producto escalar entre uno disperso y uno denso

double scalprod(const vector_pair_t& a, const vector_t& b) {
    int i = 0, j = 0, a_nz = a.get_nz();
    double scal_prod{0.0};
    for (int i = 0; i < a_nz; i++) {
        scal_prod += a.at(i).get_val() * b.get_v(get_v(i).get_inx);
    }
    return scal_prod

}


// Apartado c fusionar dos vectores ordenados con elemento centinela

void vector_t::fusion(const vector_t& a, const vector_t& b) {
    for (int i{0}, j{0}; i < a.size() && b.size();) {
        if (a[i] < b[j]) push_back(a[i++]);
        else push_back(b[j++]);
    }
}


// EXAMEN 20 mayo 2023
#include <iostream>
#include <vector>

const int BINARY[] = 0, 1;
const int BINARY_sz = (sizeof)BINARY(int) - 1;

int binario_par(const std::vector<int>& binario, const int i = 0 ) {
    if (i == binario.size()) 
        std::cout << binario << " ";
    else {
        for (int j = 0; j < BINARY_sz; j++) {
            binario[i] = BINARY[j];
            binario_par(binario, i + 1);
        }
    }
}


//EJERCICIO 3