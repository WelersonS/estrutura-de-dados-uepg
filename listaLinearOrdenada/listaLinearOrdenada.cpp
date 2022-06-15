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
	
	for(i = tamanho; i > 0 && valor < lista[i-1]; i--) {
		lista[i] = lista[i-1];
	}
	
	lista[i] = valor;
	tamanho++;
	cout << "Elemento inserido" << endl;
}

//imprime o valor inserido em uma determinada posi��o. O programa deve verificar se a posi��o � v�lida
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

//remove um valor espec�fico da lista mantendo-a ordenada
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
			tamanho--;
			while(i < tamanho) {
				lista[i] = lista[i+1];
				i++;
			}
			cout << "Elemento removido da lista" << endl;
			return;
		} else if(lista[i] > valor) {
			cout << "O valor nao existe na lista" << endl;
			return;
		}
	}
}

//informa em que posi��o da lista est� determinado valor
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
	//testa impress�o lista vazia
	imprime();
	
	//testa recuperar lista: lista vazia
	recuperaLista(0);
	
	//testa remover valor: lista vazia
	removeValor(15);
	
	//testa buscar lista: lista vazia
	buscaLista(25);
	
	//testa inser��o
	insereLista(10);
	insereLista(20);
	insereLista(30);
	insereLista(60);
	insereLista(50);
	insereLista(40);
	insereLista(70);
	
	//testa inser��o na lista cheia
	insereLista(80);
	
	//testa impress�o com lista cheia
	imprime();
	
	//testa recuperar lista: posicao inv�lida
	recuperaLista(7);
	
	//testa recuperar lista: posicao v�lida
	//dever� imprimir valor = 40
	recuperaLista(0);
	
	//dever� imprimir valor = 70
	recuperaLista(6);
	
	//testa busca lista: valor n�o existente
	buscaLista(85);
	
	//testa busca lista: valor existente
	//dever� retornar posi��o 3
	buscaLista(40);
	
	//testa remover valor: valor n�o existente
	removeValor(45);
	
	//testa remover valor: valor existente
	removeValor(70);
	imprime();
	insereLista(87);
	imprime();	
}
