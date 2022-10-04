#include <stdio.h>
#include <ctype.h>
#include "../Pilhas/pilha.h"
#include "fila.h"

int main(){
    char s[256];
	Fila F = fila(256);
	Pilha P = pilha(256);
	printf("\nFrase? ");
    gets(s);

    for(int i=0; s[i]; i++) 
        if( isalpha(s[i]) ) {
            enfileira(s[i], F);
            empilha(s[i], P);
        }
    
    while( !vaziaf(F) && toupper(desenfileira(F))==toupper(desempilha(P) ));
    if( vaziaf(F)) puts("A frase e palindroma");
    else puts("A frase nao e palindroma");
    destroif(&F);
	destroip(&P);	
    return 0;
}
