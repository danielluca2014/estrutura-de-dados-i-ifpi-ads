#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define fmt "%c"

int ultimo(Lista L) {
	while( L != NULL ) {
		if(L->prox == NULL){
			printf(fmt, L->item);
		}
		L = L->prox;
	}
}

int main() {
	Lista L = no('a',no('b',no('c', NULL)));
	ultimo(L);
	
	return 0;
}
