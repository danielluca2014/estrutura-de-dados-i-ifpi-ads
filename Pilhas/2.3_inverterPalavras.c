#include <stdio.h>
#include "pilha.h"

int main() {
	char frase[16] = "apenas um teste";
	Pilha P = pilha(16);

	for(int i = 0; frase[i] != '\0'; i++){
		if (frase[i] != ' '){
			empilha(frase[i], P);

		} else {
			imprimirPilha(P);
			printf(" ");
		}
	}

	imprimirPilha(P);
	return 0;
}
