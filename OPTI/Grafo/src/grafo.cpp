 /*
 *  GRAFO.CPP - Plantilla para la implementaci�n de la clase GRAFOS
 *
 *
 *  Autores : Antonio Sedeno Noda, Sergio Alonso
 *  Cursos   : 2012-2021
 */

#include "grafo.h"

void GRAFO :: destroy() {
	for (unsigned i=0; i< n; i++) {
		LS[i].clear();
		A[i].clear();
		if (dirigido == 1) {
      LP[i].clear();
    };
	}
	LS.clear();
	LP.clear();
	A.clear();
}

void GRAFO::build (string nombrefichero, int &errorapertura) {
  ElementoLista dummy;
	ifstream textfile;
	textfile.open(nombrefichero);
	if (textfile.is_open()) {
		unsigned i, j, k;
		// leemos por conversion implicita el numero de nodos, arcos y el atributo dirigido
		textfile >> (unsigned & ) n >> (unsigned &) m >> (unsigned &) dirigido;
		// los nodos internamente se numeran desde 0 a n-1
		// creamos las n listas de sucesores
		LS.resize(n);
		A.resize(n);
		LP.resize(n);
        // leemos los m arcos
		for (k = 0; k < m ; k++) {
			//damos los valores a dummy.j y dummy.c
			textfile >> (unsigned &) i  >> (unsigned &) j >> (int &) dummy.c;
      dummy.j = j - 1;
				//situamos en la posici�n del nodo i a dummy mediante push_back
				//pendiente de hacer un segundo push_back si es no dirigido. O no.
      if (dirigido == 1) {
			  //pendiente la construcci�n de LP, si es dirigido
      	LS[i - 1].push_back(dummy);
        dummy.j = i - 1;
        LP[j - 1].push_back(dummy);
      }  
			if (dirigido == 0) {
        LS[i - 1].push_back(dummy);
        dummy.j = i - 1;
				if ( (j - 1) != (i - 1)) {
					LS[j - 1].push_back(dummy);
				}
      }
    }
		// Cerramos el fichero
		textfile.close();
		//pendiente del valor a devolver en errorapertura
    errorapertura = 0;
		//...

 	} else if ( !textfile.is_open()) {
		errorapertura = 1;
	}
}


GRAFO::~GRAFO() {
	destroy();
}

GRAFO::GRAFO(string nombrefichero, int &errorapertura) {
	build(nombrefichero, errorapertura);
}

void GRAFO:: actualizar (string nombrefichero, int &errorapertura) {
    //Limpiamos la memoria dinamica asumida en la carga previa, como el destructor
    destroy();
    //Leemos del fichero y actualizamos G con nuevas LS y, en su caso, LP
    build(nombrefichero, errorapertura);
}

unsigned GRAFO::Es_dirigido() {
	return dirigido;
}

void GRAFO::Info_Grafo() {
	cout << endl;
	cout << "Número de nodos: " << n << endl;
	cout << "Número de arcos: " << m << endl;
	cout << "Tipo de grafo" << (dirigido == 1 ? " Dirigido " : " No dirigido");
	cout << endl << endl;
}

void Mostrar_Lista(vector<LA_nodo> L) {
	for (unsigned i = 0; i < L.size(); i++) {
		cout << "Nodo " << i + 1 << ": ";
		for (unsigned j = 0; j < L[i].size(); j++) {
			cout << L[i][j].j + 1 << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void GRAFO :: Mostrar_Listas (int l) {
	switch(l) {
		case 0:
			Mostrar_Lista(LS);
			break;
		case 1:
			Mostrar_Lista(LS);
			break;
		case -1:
			Mostrar_Lista(LP);
			break;
	}	
}

void GRAFO::Mostrar_Matriz() {
	 vector<vector<int>> matriz_ady(n, vector<int>(n, 0));
  vector<vector<int>> matriz_costes(n, vector<int>(n, -1));

  for(unsigned i = 0; i < LS.size(); ++i) {
    for(auto adyacente : LS[i]) {
      matriz_ady[i][adyacente.j] = 1;
      matriz_costes[i][adyacente.j] = adyacente.c;
      if(!dirigido) {
        matriz_ady[adyacente.j][i] = 1;
        matriz_costes[adyacente.j][i] = adyacente.c;
      }
    }
  }

  cout << "Matriz de adyacencia" << endl;
  for(const auto& fila : matriz_ady) {
    for(int ady : fila) {
      cout << ady << " ";
    }
    cout << endl;
  }

  cout << endl << "Matriz de costes" << endl;
  for(const auto& fila : matriz_costes) {
    for (int coste : fila) {
      if (coste == -1) {
        cout << " X ";
      } else {
        cout <<  " " << coste << " ";
      }
    }
  cout << endl;
  }
}	


void GRAFO::dfs_num(unsigned i, vector<LA_nodo>  L, vector<bool> &visitado, vector<unsigned> &prenum, unsigned &prenum_ind, vector<unsigned> &postnum, unsigned &postnum_ind) { //Recorrido en profundidad recursivo con recorridos enum y postnum
	visitado[i] = true;
  prenum[prenum_ind++]=i + 1;//asignamos el orden de visita prenum que corresponde el nodo i
  for (unsigned j=0;j<L[i].size();j++)
    if (!visitado[L[i][j].j]) {
      dfs_num(L[i][j].j, L, visitado, prenum, prenum_ind, postnum, postnum_ind);
  	}
  postnum[postnum_ind++]=i + 1 ;//asignamos el orden de visita posnum que corresponde al nodo i
}

void GRAFO::RecorridoProfundidad() {
  vector<bool> visitado;
  visitado.resize(n, false);

  vector<unsigned> prenum;
  prenum.resize(n, 0);    
    
  vector<unsigned> postnum;
  postnum.resize(n, 0);

  unsigned prenum_ind = 0;
  unsigned postnum_ind = 0;
  unsigned nodo_solicitado = 0;

  cout << "Introduzca el nodo inicial: [1 - " << n << "]" << endl;
  cin >> (unsigned &) nodo_solicitado;

	while (nodo_solicitado < 1 || nodo_solicitado > n) {
		cout << "El nodo introducido no es válido. Introduzca un nodo entre [1 y " << n << "]" << endl;
		cin >> (unsigned &) nodo_solicitado;
	}

  dfs_num(nodo_solicitado - 1, LS, visitado, prenum, prenum_ind, postnum, postnum_ind);
    //Imprimimos por pantalla prenum y postnum
	cout << "Recorrido en preorden: ";
	for (unsigned i = 0; i < prenum.size() - 1; i++) {
		(i == prenum_ind- 1) ? cout << "[" << prenum[i] << "]" : cout << "[" << prenum[i] << "] -> ";
	}
	cout << endl;

	cout << "Recorrido en postorden: ";
	for (unsigned i = 0; i < postnum.size() - 1; i++) {
		(i == postnum_ind - 1) ? cout << "[" << postnum[i] << "]" : cout << "[" << postnum[i]  << "] -> ";
	}
	cout << endl;
}

 void GRAFO::bfs_num(	unsigned i, //nodo desde el que realizamos el recorrido en amplitud
				vector<LA_nodo>  L, //lista que recorremos, LS o LP; por defecto LS
				vector<unsigned> &pred, //vector de predecesores en el recorrido
				vector<unsigned> &d) //vector de distancias a nodo i+1
//Recorrido en amplitud con la construcci�n de pred y d: usamos la cola
{
  vector<bool> visitado; //creamos e iniciamos el vector visitado
  visitado.resize(n, false);
  visitado[i] = true;

  pred.resize(n, 0); //creamos e inicializamos pred y d
  d.resize(n, 0);
  pred[i] = i;
  d[i] = 0;

  queue<unsigned> cola; //creamos e inicializamos la cola
  cola.push(i);//iniciamos el recorrido desde el nodo i+1

  while (!cola.empty()) { //al menos entra una vez al visitar el nodo i+1 y contin�a hasta que la cola se vac�e
   unsigned k = cola.front(); //cogemos el nodo k+1 de la cola
    cola.pop(); //lo sacamos de la cola
    //Hacemos el recorrido sobre L desde el nodo k+1
      for (unsigned j = 0; j < L[k].size(); j++) {
      //Recorremos todos los nodos u adyacentes al nodo k+1
      //Si el nodo u no est� visitado
				if (!visitado[L[k][j].j]) {
					//Lo visitamos
					visitado[L[k][j].j] = true;
					//Lo metemos en la cola
					cola.push(L[k][j].j);
					//le asignamos el predecesor
					pred[L[k][j].j] = k;
					//le calculamos su etiqueta distancia
					d[L[k][j].j] = d[k] + 1;
      	} 
      }
        //Hemos terminado pues la cola est� vac�a
    }
}

void GRAFO::RecorridoAmplitud() { //Construye un recorrido en amplitud desde un nodo inicial 

  unsigned i = 0;
	vector<unsigned> pred(n, UERROR);
	vector<unsigned> d(n, maxint);

  cout << "Introduzca el nodo inicial (1 <= nodo_introducido <= n) " << endl;
  cin >> (unsigned &) i;

	while (i < 1 || i > n) {
		cout << "El nodo introducido no es válido. Introduzca un nodo entre [1 y " << n << "]" << endl;
		cin >> (unsigned &) i;
	}
    
  bfs_num(i - 1, LS, pred, d);
	cout << "Nodos segun distancia al nodo inicial en numero de aristas" << endl;
	for (int dist = 0; dist < n; dist++) {
		bool distanciaVacia = true; // Variable para verificar si la distancia está vacía
		cout << "Distancia " << dist << ": ";
		for (int nodo = 0; nodo < n; nodo++) {
			if (d[nodo] == dist) {
				cout << nodo + 1 << " ";
				distanciaVacia = false; // La distancia no está vacía
			}
		}
		if (distanciaVacia) {
			break; // Si la distancia está vacía, salimos del bucle
		}
		cout << endl;
	}
	cout << endl;

	cout << "Ramas de conexiones" << endl;
	for (unsigned i = 0; i < pred.size(); i++) {
		if (pred[i] != UERROR) {
			vector<unsigned> ramas;
			unsigned nodo_actual = i;
			while (nodo_actual != pred[nodo_actual]) {
				ramas.push_back(nodo_actual + 1);
				nodo_actual = pred[nodo_actual];
			}
			ramas.push_back(nodo_actual + 1);
			for (int j = ramas.size() - 1; j >= 0; j--) {
				cout << ramas[j];
				if (j != 0) {
					cout << " - ";
				}
			}
			cout << endl;
		}
	}

}