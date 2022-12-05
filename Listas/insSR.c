#include "lista_ordenada.c"

void insSR(int x, Lista *L) { 
	while( *L != NULL && (*L)->item < x) L = &(*L)->prox; 
	if (em(x, *L) == 0) *L = no(x, *L); 
}

int main(){
	Lista L = NULL;
	insSR(3, &L);
	insSR(8, &L);
	insSR(3, &L);
	insSR(2, &L);
	insSR(5, &L);
	exibe(L);

	return 0;
}	
