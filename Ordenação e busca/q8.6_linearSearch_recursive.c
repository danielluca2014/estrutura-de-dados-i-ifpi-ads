#include <stdio.h>

int linearSearch(int x, int v[], int n) {
	for(int i=0; i<n; i++)
		if( x == v[i] ) 
			return 1;
	return 0;
}

int main() {
    int n = 5;
    int v[] = {10, 5, 15, 3, 8};

    if(linearSearch(10, v, n) == 1) {
    	printf("Valor encontrado.");
	} else {
		printf("Valor nao encontrado.");
	}
}
