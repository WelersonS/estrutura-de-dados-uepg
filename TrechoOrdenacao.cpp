#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 10;

int vetor[TAM];    /* Arquivo */


//Cria vetor randômico
void gera() {
    int i;
    for (i=0; i<TAM; i++)
        vetor[i]=rand();
}

void bubbleSort() {
	int pass = 1, aux;
	bool sorted = 0;
	
	while(!sorted && pass < TAM) {
		sorted = 1;
		
		for(int i = 0; i < TAM-pass; i++) {
			if(vetor[i] > vetor[i+1]) {
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				sorted = 0;
			}			
			
		}	
		pass++;
	}
}

int main() {

    clock_t tempo1;
    clock_t tempo2;
    // Marca o tempo de execução do algoritmo bubbleSort()
    gera();
    
    for (int i=0; i<TAM; i++)
        cout<< vetor[i] << " ";
        
    tempo1 = clock();
	bubbleSort();
	
	cout << "" << endl;
	
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    
    for (int i=0; i<TAM; i++)
        cout<< vetor[i] << " ";
}
