#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define fmt "%d"

int ocorrencias(int x, Lista L) {
	int count;
	
	while( L != NULL ) {
		if(x == L->item ) {
			count ++;
		}
		
		L = L->prox;
	}
	
	return count;
}

int main() {
	Lista L = no(1,no(2,no(1,no(4,no(1,NULL)))));
	int quantOcorrencias = ocorrencias(1, L);
	
	printf(fmt, quantOcorrencias);
	
	return 0;
}
