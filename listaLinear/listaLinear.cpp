#include <iostream>

using namespace std;

const int TAM = 6;

int lista[TAM];
int tamanhoLista = 0;

//insere um valor em uma posição da lista linear
//o programa deve verificar se a posição é válida
void insereLista(int valor, int posicao) {
	int i;
	
	if(tamanhoLista == TAM) {
		cout << "Lista cheia" << endl;
		return;
	}
	
	if(posicao > tamanhoLista || posicao < 0) {
		cout << "Posicao invalida" << endl;
	}
	
	for(i = tamanhoLista; i > posicao ;i--) {
		lista[i] = lista[i-1];	
	}
	
	lista[posicao] = valor;
	tamanhoLista++;
	
	cout << "Elemento inserido" << endl;
}

//imprime o valor inserido em uma determinada posição
void recuperaLista(int posicao) {
	if(tamanhoLista == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	if(posicao >= tamanhoLista || posicao < 0) {
		cout << "Posicao invalida" << endl;
		return;
	}
	
	cout << lista[posicao] << endl;
}

//informa em que posição da lista está em determinado valor
void buscaLista(int valor) {
	if(tamanhoLista == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	for(int i = 0; i < tamanhoLista; i++) {
		if(valor == lista[i]) {
			cout << i << endl;
			return;
		}
	}
	
	cout << "O valor nao existe na lista" << endl;
}

//imprime o conteúdo da lista, se estiver vazia, informe uma mensagem
void imprimeLista() {
	if(tamanhoLista == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	for(int i = 0; i < tamanhoLista; i++) {
		cout << lista[i] << endl;
	}
	
}

int main() {
	insereLista(15, 0);
	insereLista(7, 1);
	insereLista(30, 2);
	insereLista(23, 3);
	insereLista(30, 4);
	imprimeLista();
	
	recuperaLista(4);
	recuperaLista(0);
	
	buscaLista(30);
	buscaLista(50);
}
