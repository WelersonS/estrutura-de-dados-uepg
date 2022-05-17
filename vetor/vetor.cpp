#include <iostream> //#include <stdio.h>

using namespace std;

const int TAM = 5; //#define TAM 5

int vetor[TAM];

int main() {
    int count;

    cout << "Digite cinco numeros:\n";

	//atribuição
    for(count=0; count < TAM; count++) {
        cin >> vetor[count];
    }

    cout << "\n";

	//print
    for(count=0; count < TAM; count++) {
        cout << vetor[count] << " ";
    }
    
    int maior;
    
    maior = vetor[0];
    
    for(count = 1; count < TAM; count++) {
    	if(vetor[count] > maior) {
    		maior = vetor[count];
		}
	}
	
	cout << "\n";
	
	cout << "Maior valor do vetor: " << maior;
}
