#include <stdio.h>
#include "fila.h"
#define tempo 3

/* Os processos são representados por int p = x / 10. Logo 17 é referente ao processo 1, 25 é referente ao processo 2, 39 ao processo 3 e 46 ao processo 4. Como o tempo dos processos é definido por int t = x % 10 
e os processos são encerrados quando t < 3, a sequinte sequência de conclusão é encontrada: 2, 4, 1, 3. */

int main() {
	Fila F = fila(5);
	enfileira(17, F);
	enfileira(25, F);
	enfileira(39, F);
	enfileira(46, F);
	
	while( !vaziaf(F) ) {
		int x = desenfileira(F);
		int p = x/10;
		int t = x%10;
		if( t>3 ) enfileira(p*10+(t-tempo), F);
		else printf("Processo %d concluido\n", p);
	}
	destroif(&F);
	return 0;
}
