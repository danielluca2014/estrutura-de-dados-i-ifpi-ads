#include <stdio.h>

int linearSearch(int x, int v[], int n) {
    n--;
 
    if(n > 0) {
        if (v[n] == x)
            return 1;
    }
    else
        return 0;
 
    return linearSearch(x, v, n);
}

int main() {
    int n = 5;
    int v[] = {10, 5, 15, 3, 8};

    if(linearSearch(8, v, n) == 1) {
    	printf("Valor encontrado.");
    	
	} else {
		printf("Valor nao encontrado.");
	}
}
