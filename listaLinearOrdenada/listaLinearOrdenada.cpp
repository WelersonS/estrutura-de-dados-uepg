#include <iostream>

using namespace std;

const int TAM = 7;

int lista[TAM];
int tamanho = 0;

//insere um valor em uma posição da lista linear mantendo-a ordenada
void insereLista(int valor) {
	int i;
	
	if(tamanho == TAM) {
		cout << "Lista cheia" << endl;
		return;
	}
	
	for(i = tamanho; i > 0 && valor < lista[i-1]; i--) {
		lista[i] = lista[i-1];
	}
	
	lista[i] = valor;
	tamanho++;
}

//imprime o valor inserido em uma determinada posição. O programa deve verificar se a posição é válida
void recuperaLista(int posicao) {
	if(tamanho == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	if(posicao >= tamanho || posicao < 0) {
		cout << "Posicao invalida" << endl;
		return;
	}
	
	cout << "O valor na posicao " << posicao << " e " << lista[posicao] << endl;
}

//remove um valor específico da lista mantendo-a ordenada
//*fazer busca
//quando encontrar um valor maior ao que esta sendo buscado, já deve parar a execução
void removeValor(int valor) {
	if(tamanho == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	if(valor > lista[tamanho-1] || valor < lista[0]) {
		cout << "Valor nao existe na lista" << endl;
		return;
	}
	
	for(int i = 0; i < tamanho; i++) {
		if(valor == lista[i]) {
			lista[i] = lista[i+1];
		} else if(lista[i] > valor) {
			cout << "O valor nao existe na lista" << endl;
			return;
		}
	}
	
	cout << "Elemento removido da lista" << endl;
}

//informa em que posição da lista está determinado valor
void buscaLista(int valor) {
	if(tamanho == 0) {
		cout << "Lista vazia" << endl;
		return;
	}
	
	for(int i = 0; i < tamanho; i++) {
		if(valor == lista[i] ) {
			cout << "O valor " << valor << " esta na posicao: " << i << endl;
			return;
		} else if(lista[i] > valor || i == tamanho-1) {
				cout << "O valor nao existe na lista" << endl;
				return;
			}
		}
	}	
}

//imprime o conteúdo da lista. Se a lista estiver vazia, imprima a mensagem “Lista vazia”
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
	
	buscaLista(15);
	recuperaLista(3);
}
