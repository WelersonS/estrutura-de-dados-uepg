#include <iostream>

using namespace std;

const int TAM = 7;

int lista[TAM];
int tamanho = 0;

//insere um valor em uma posi��o da lista linear mantendo-a ordenada
void insereLista(int valor) {
	int i;
	
	if(tamanho == TAM) {
		cout << "Lista cheia" << endl;
		return;
	}
	
	for(i = tamanho; i > 0 && valor < lista[i-1] ;i--) {
		lista[i] = lista[i-1];
	}
	
	lista[i] = valor;
	tamanho++;
}

//imprime o valor inserido em uma determinada posi��o. O programa deve verificar se a posi��o � v�lida
//quando encontrar um valor maior ao que esta sendo buscado, j� deve parar a execu��o
/*void recuperaLista(int posi��o) {
	
}*/

//remove um valor espec�fico da lista mantendo-a ordenada
//*fazer busca
/*void removeValor(int valor) {
	
}*/

//informa em que posi��o da lista est� determinado valor
void buscaLista(int valor) {
	if(tamanho == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	for(int i = 0; i < tamanho; i++) {
		if(valor == lista[i] ) {
			cout << i << endl;
			return;
		} else {
			if(lista[i] > valor || i == tamanho-1) {
				cout << "O valor nao existe na lista" << endl;
				return;
			}
		}
	}	
}

//imprime o conte�do da lista. Se a lista estiver vazia, imprima a mensagem �Lista vazia�
void imprime() {
	if(tamanho == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	for(int i = 0; i < tamanho; i++) {
		cout << lista[i] << endl;
	}
}

int main() {
	insereLista(15);
	insereLista(10);
	insereLista(3);
	insereLista(10);
	
	imprime();
	
	buscaLista(20);
}
