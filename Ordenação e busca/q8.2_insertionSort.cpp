#include <iostream>
#include <cstring>

using namespace std;

void insere(char x, char v[], int n) { 
	while( n>0 && x<v[n-1] ) { 
		v[n] = v[n-1];
		n--;
	}
	v[n] = x;
}

void insertionSort(char v[], int n) {
	for(int i=0; i<n; i++)
		insere(v[i],v,i); 
}

int main() {
    int n = 6;
    char v[] = "Daniel";

    insertionSort(v, n);
		
   	for(int i = 0; i < n; i++) {
        printf("%c", v[i]);
    }
}
