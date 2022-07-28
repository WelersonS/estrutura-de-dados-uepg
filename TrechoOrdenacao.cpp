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
	int pass = 1;
	bool sorted = 0;
	
	while(!sorted || pass < TAM) {
		sorted = 1;
		
		for(int i = 0; i < TAM; i++) {
			if(vetor[i] > vetor[i+1]) {
				vetor[i] = vetor[i+1];
				vetor[i+1] = vetor[i];
				sorted = 0;
			}
		}
	}
}

int main() {

    clock_t tempo1;
    clock_t tempo2;
    // Marca o tempo de execução do algoritmo bubbleSort()
    gera();
    tempo1 = clock();
	bubbleSort();
	
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    
    for (int i=0; i<TAM; i++)
        cout<< vetor[i] << " ";
}
