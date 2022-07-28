#include <iostream> 

using namespace std;

struct no {
	int dado;
	struct no *prox;
};

struct no *inicio = NULL;
struct no *fim = NULL;

//insere um valor no final da fila
void insereFila(int valor) {
	struct no *novo;
	
	novo = new(struct no);
	novo -> dado = valor;
	novo -> prox = NULL;
	
	if(fim == NULL) {
		inicio = novo;
	} else {
		fim -> prox = novo;
	}
	
	fim = novo;
	
	cout << "Elemento inserido" << endl;
}

//remove valor inserido no início da fila
void removeFila() {
	if(inicio == NULL) {
		cout << "Nao eh possivel remover. Fila vazia" << endl;
		return;
	}
	
	struct no *apaga;
	
	apaga = inicio;
	
	inicio = inicio -> prox;
	
	//deleta
	delete(apaga);
	
	if (inicio == NULL) {
		fim = NULL;
	}
	
	cout << "Elemento removido" << endl;
}

//imprime valor do elemento inserido no inicio da fila
void inicioFila() {
	if(inicio == NULL) {
		cout << "Nao ha elemento no inicio. Fila vazia" << endl;
		return;
	}
	
	cout << "Valor no inicio da fila eh: " << inicio -> dado << endl;
}

//imprime o conteúdo da fila. Se a fila estiver vazia, imprima a msg "Fila vazia"
void imprime() {
	if(inicio == NULL) {
		cout << "Fila vazia" << endl;
		return;
	}
	
	struct no *aux = inicio;
	
	while(aux != NULL) {
		cout << aux -> dado << " ";
		aux = aux -> prox;
	}
	
	cout << "" << endl;
}

int main() {
	/*
	//deverá informar que a fila está vazia
	inicioFila();
	cout << "" << endl;
	
	//deverá informar que a fila está vazia
	imprime();
	cout << "" << endl;
	
	//deverá informar que a fila está vazia
	removeFila();
	cout << "" << endl;
	
	insereFila(15);
	insereFila(10);
	insereFila(25);
	cout << "" << endl;
	
	//deverá informar o elemento no inicio da fila: (15)
	inicioFila();
	cout << "" << endl;
	
	//devera imprimir os elementos da fila
	imprime();
	cout << "" << endl;
	
	insereFila(40);
	insereFila(55);
	cout << "" << endl;
	
	imprime();
	cout << "" << endl;
	
	//deverá remover os elementos da fila
	removeFila();
	removeFila();
	cout << "" << endl;
	
	//deverá informar o elemento no inicio da fila: (25)
	inicioFila();
	cout << "" << endl;
	
	removeFila();
	removeFila();
	removeFila();
	cout << "" << endl;
	
	//deverá imprimir: fila vazia
	removeFila();
	cout << "" << endl;
	
	//deverá imprimir: fila vazia
	imprime();
	cout << "" << endl;
	
	//deverá imprimir: fila vazia
	inicioFila();
	cout << "" << endl;
	
	//insere novos elementos na fila
	insereFila(10);
	insereFila(20);
	insereFila(30);
	cout << "" << endl;
	
	//imprime os novos elementos da fila
	imprime();
	cout << "" << endl;
	
	//remove elemento da fila (10)
	removeFila();
	
	//insere novo elemento
	insereFila(40);
	cout << "" << endl;
	
	//deverá imprimir (20 30 40)
	imprime();
	*/
	
	insereFila(30);
	removeFila();
	insereFila(40);
	imprime();
	inicioFila();
}
