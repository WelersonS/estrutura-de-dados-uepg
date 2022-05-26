#include <iostream>

using namespace std;

const int TAM = 5;

int fila[TAM];
int inicio = 0;
int fim = 0;
int contador = 0;

void insereFila(int valor) {
	if(contador == TAM) {
		cout << "Fila cheia" << endl;
	} else {
		fila[fim] = valor;
		
		//verifica se fim é a última posição do vetor
		if(fim == TAM-1) {
			fim = 0;
		} else {
			fim++;
		}
		
		contador++;
		
		cout << "Elemento inserido" << endl;
	}
}

void removeFila() {
	if(contador == 0) {
		cout << "Fila vazia" << endl;
	} else {
		if(inicio == TAM-1) {
			inicio = 0;
		} else {
			inicio++;
		}
		
		contador--;
		cout << "Elemento removido" << endl;
	}
}

void imprimeFila() {
	int i, j;
	
	if(contador == 0) {
		cout << "Fila vazia" << endl;
 	} else {
 		i = inicio;
 		
 		for(j = 0; j < contador; j++) {
 			cout << fila[i] << endl;
 			
 			if(i == TAM-1) {
 				i = 0;
			 } else {
			 	i++;
			 }
		 }
	 }
}

int main() {
	insereFila(10);
	insereFila(20);
	insereFila(30);
	insereFila(40);
	insereFila(50);
	
	removeFila();
	
	insereFila(60);
	
	imprimeFila();
}
