#include "lista_ordenada.c"

void ordem_decrescente(int x, Lista *L) { 
	while( *L != NULL && (*L)->item > x) L = &(*L)->prox; 
	*L = no(x, *L); 
}

int main(){
	Lista L = NULL;
	ordem_decrescente(3, &L);
	ordem_decrescente(8, &L);
	ordem_decrescente(7, &L);
	ordem_decrescente(2, &L);
	ordem_decrescente(5, &L);
	exibe(L);

	return 0;
}	

