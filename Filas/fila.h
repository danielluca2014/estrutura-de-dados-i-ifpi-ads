#include <stdio.h>
#include <stdlib.h>

typedef char Itemf;

typedef struct fila {
    int max;
    int total;
    int inicio;
    int final; 
    Itemf *item;
} *Fila;

Fila fila(int m) {
    Fila F = (Fila)malloc(sizeof(struct fila));
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = (Itemf*)malloc(m*sizeof(Itemf));
    return F;
}

int vaziaf(Fila F) {
    return ( F->total == 0);
}

int cheiaf(Fila F) {
    return ( F->total == F->max);
}



