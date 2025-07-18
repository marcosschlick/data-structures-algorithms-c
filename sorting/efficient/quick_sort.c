#include <stdio.h>
#include "print.h"


int particiona(int vetor[], int inicio, int fim) {
	int pivo = vetor[fim]; 
        int i = inicio - 1;    

        for (int j = inicio; j < fim; j++) {
       
        	if (vetor[j] <= pivo) {
            		i++;
 
            		int temp = vetor[i];
            		vetor[i] = vetor[j];
            		vetor[j] = temp;
        	}
    	}
    
	int temp = vetor[i + 1];
        vetor[i + 1] = vetor[fim];
        vetor[fim] = temp;
    
    return i + 1; 
}

void sort(int vetor[], int inicio, int fim) {
        if (inicio < fim) {
		int p = particiona(vetor, inicio, fim);
        
        	sort(vetor, inicio, p - 1); 
        	sort(vetor, p + 1, fim);    
    }
}




int main() {
	int array[] = { 5, 9, 3, 34, 13, 8, 29, 10 };
	int length = sizeof(array) / sizeof(array[0]);
	
	print(array, length);
	
	sort(array, 0, length - 1);

	print(array, length);
	
	
	return 0;
}
