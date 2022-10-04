#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char data;
		No *prox;
		No(char n){
			data = n;
			prox = NULL;
		}
};

class Fila{
	public:
		No *inicio;
		No *fim;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
		}
		
		void push(char n){
			No *lista = new No(n);

            if(isEmpty()){
                inicio = lista;
            } else {
                fim->prox = lista; 
            }

            fim = lista;
		}
		
		char pop(){
			char n = inicio->data;
            No *aux = inicio;
            inicio = inicio->prox;

            free(aux);

            if (inicio == fim){
                fim = NULL;
            }
            
            return n; 
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
		
	    void show(){
	    	No *aux;

			while (inicio!=NULL){
				aux = inicio;
				printf("%c", inicio->data);
				inicio = inicio->prox;
				
				free(aux);
			}
		}	
};

int main(){
	Fila *fila = new Fila();
	fila->push('d');
	fila->push('a');
	fila->push('n');
	
	fila->show();
}
