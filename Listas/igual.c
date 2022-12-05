#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define fmt "%d"

int igual(Lista A, Lista B) {
	if(A == NULL && B == NULL) {
		return 1;
	}
	
	if (A->item == B->item){
        return igual(A->prox, B->prox);
    } 
    else {
    	return 0;
	}
}

int main() {
	Lista A = no(1 ,no(2, no(3 ,NULL)));
	Lista B = no(1 ,no(2, no(3 ,NULL)));
	
	printf("%d", igual(A, B));
	
	return 0;
}
