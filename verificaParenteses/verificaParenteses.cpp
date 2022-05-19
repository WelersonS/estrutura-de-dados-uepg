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

void verificaParenteses() {
	string expressao;
	int tamanho, i;
	
	expressao = "(a+b()";
	
	tamanho = expressao.size();
	
	for(i=0; i < tamanho; i++) {
		if(expressao[i] == '(') {
			push('(');
		}
		if(expressao[i] == ')') {
			if(topo == -1) {
				cout << "Expressao errada." << endl;
				return;
			}
			pop();	
		}
	}
	
	if(topo == -1) {
		cout << "Expressao correta.";
	} else {
		cout << "Expressao errada.";
	}
	
}

int main() {
	verificaParenteses();
}
