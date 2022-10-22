#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define fmt "%c"

void substitui(char x, char y, Lista L) {
	if( L == NULL ) return;
	
	if( L->item == x ) {
		L->item = y;
	}
	
	substitui(x, y, L->prox);
}

int main() {
	Lista L = no('b',no('o',no('b',no('o', NULL))));
	
	substitui('o','a',L);
	exibe(L);
	
	return 0;
}
