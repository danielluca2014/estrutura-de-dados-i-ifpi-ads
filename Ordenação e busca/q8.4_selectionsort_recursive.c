// Daniel Luca & Francisco Igor

#include <stdio.h>
#include <stdlib.h>
#define troca(a,b) { int x=a; a=b; b=x; }


int seleciona(int v[], int n) { 
	int i = 0;
	for(int j=1; j<n; j++)
		if( v[i]<v[j] ) i = j;
	return i;
}	

void selectionSort(int v[], int n) {
	if(n <= 1) 
		return;
		
    troca( v[seleciona(v,n)], v[n-1] );
    
    n--;
    selectionSort(v, n);
}

int main() {
    int n = 5;
    int v[] = {25,5,15,75,50};

    selectionSort(v, n);
    
    for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }
}
