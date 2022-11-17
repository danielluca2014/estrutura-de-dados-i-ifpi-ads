#include <stdio.h>
#include <stdlib.h>

void insere(int x, int v[], int n) { 
	while( n>0 && x<v[n-1] ) { 
		v[n] = v[n-1];
		n--;
	}
	v[n] = x;
}

void insertionSort(int v[], int n) {
	if (n <= 1)
        return;
 	n--;
    insertionSort(v, n);
	insere(v[n],v,n);  
}

int main() {
    int n = 5;
    int v[] = {10, 5, 15, 3, 8};

    insertionSort(v, n);
		
   	for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }
}
