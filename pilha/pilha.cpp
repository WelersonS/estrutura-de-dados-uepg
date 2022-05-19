#include <iostream>

using namespace std;

const int TAM = 6;

int pilha[TAM];

int topo = -1;

void push(int valor) {
	if(topo == TAM-1) {
		cout << "Elemento não inserido. Pilha cheia." << endl;
	} else {
		topo++;
		pilha[topo] = valor;
		cout << "Elemento inserido na pilha." << endl;
	}
}

void pop() {
	if(topo == -1) {
		cout << "Pilha vazia" << endl;
	} else {
		topo--;
		cout << "Elemento removido da pilha." << endl;
	}
}

void top() {
	if(topo == -1) {
		cout << "Pilha vazia" << endl;
	} else {
		cout << "Topo da pilha: " << pilha[topo] << endl;
	}
	
}

void print() {
	if(topo == -1) {
		cout << "Pilha vazia" << endl;
	} else {
		int count = 0;
		
		/*
		for(count = 0; count <= topo; count++) {
			cout << pilha[count] << endl;
		}
		*/
		
		for(count=topo; count >= 0; count--) {
			cout << pilha[count] << endl;
		}	
	}
}

int main() {
	push(10);
	push(20);
	push(30);
	push(40);
	top();
	
	pop();
	top();
	
	push(50);
	push(60);
	push(70);
	//push(70);
	
	cout << "\n";
	print();
	
}
