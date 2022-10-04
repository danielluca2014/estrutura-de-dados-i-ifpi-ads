#include <stdio.h>
#include "pilha.h"

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    
    Pilha A = pilha(n);
    for(int i = 0; i < n; i++) {
        int valor;
        printf("valor: ");
        scanf("%d", &valor);
        empilha(valor, A);
    }

    Pilha B = pilha(n);
    
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < (n - i - 1); j++){ 
            if (A->item[j] < A->item[j + 1]){
                B->item[j] = A->item[j];
                A->item[j] = A->item[j + 1]; 
                A->item[j + 1] = B->item[j];
            }
        }        
    }

    imprimirPilha(A);
    return 0;
}
