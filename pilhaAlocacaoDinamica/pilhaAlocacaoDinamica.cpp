#include <iostream>

using namespace std;

struct no {
	int dado;
	struct no *prox;
};

// *topo é o nome do ponteiro
//struct no indica que o ponteiro *topo, apontará para endereço que contém valores do tipo de struct no
//semelhante a uma tipagem do ponteiro
struct no *topo = NULL; 

void push(int valor) {
	struct no *novo;
	
	novo = new(struct no);
	novo -> dado = valor;
	novo -> prox = topo;
	
	//topo aponta para último valor inserido na pilha
	topo = novo;
	
	cout << "Elemento inserido" << endl;
}

void pop() {
	
	struct no *apaga;
	
	if(topo == NULL) {
		cout << "Pilha vazia" << endl;
		return;
	}
	
	//utilizar momory trash para jogar o valor a ser removido para lixeira
	apaga = topo;
	
	topo = topo -> prox;
	
	//deleta o valor que apaga aponta
	delete(apaga);
	
	cout << "Elemento removido" << endl;
}

void imprime() {
	struct no *aux;
	
	if(topo == NULL) {
		cout << "Pilha vazia" << endl;
	}
	
	aux = topo;
	
	while(aux != NULL) {
		cout << aux -> dado << endl;
		aux = aux -> prox;
	}
}

int main() {
	push(10);
	push(20);
	push(30);
	imprime();
	
	pop();
	imprime();
}
