#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define fmt "%d"

int soma(Lista L) {
	if( L == NULL ) return;
	return L->item + soma(L->prox);
}

int main() {
	Lista L = no(3,no(1,no(5,no(4, NULL))));
	int somatorio = soma(L);
	
	printf(fmt, somatorio);
	
	return 0;
}
