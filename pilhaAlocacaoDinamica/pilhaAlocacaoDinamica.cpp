#include <iostream>

using namespace std;

struct no {
	int dado;
	struct no *prox;
};

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
}
