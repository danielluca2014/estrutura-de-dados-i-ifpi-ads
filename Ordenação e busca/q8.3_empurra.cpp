#include <iostream>
#define troca(a,b) { int x=a; a=b; b=x; }

using namespace std;

void empurra(int v[], int n) {
    for(int i=0; i<n; i++) {
            if(v[i] > v[i+1]) {
                troca(v[i], v[i+1]);
            }
        } 
}

void bubbleSort(int v[], int n) {
    if(n==0) return;
    empurra(v, n);
    bubbleSort(v, n-1);
}

int main() {
    int n = 5;
    int v[] = {10, 5, 15, 3, 8};

    bubbleSort(v, n);
		
   	for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }
}

