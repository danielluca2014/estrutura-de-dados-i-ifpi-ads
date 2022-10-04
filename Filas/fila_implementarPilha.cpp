#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No {
	public:
		char data;
		No *prox;
		No(char n) {
			data = n;
			prox = NULL;
		}
};

class Fila {
	public:
		No *inicio;
		No *fim;
		
		Fila() {
			inicio = NULL;
			fim = NULL;
		}
		
		void push(char n) {
			No *lista = new No(n);

            if(isEmpty()) {
                inicio = lista;
            } else {
                fim->prox = lista; 
            }

            fim = lista;
		}
		
		char pop() {
			char n = inicio->data;
            No *aux = inicio;
            inicio = inicio->prox;

            free(aux);

            if (inicio == fim) {
                fim = NULL;
            }
            
            return n; 
		}
		
		bool isEmpty() {
			return (inicio == NULL);
		}
	
		
	    void show() {
	    	No *aux;

			while (inicio!=NULL) {
				aux = inicio;
				printf("\n%c", inicio->data);
				inicio = inicio->prox;
				
				free(aux);
			}
		}	
};

inmain() {
	Fila *f1 = new Fila();
	Fila *f2 = new Fila();
	int resp;
	char letra;
	
	do {
		cout<<"Digite a letra: ";
		cin>>letra;
		
		if (f1->isEmpty() == 1) {
			f1->push(letra);
			
		} else {
			while (f1->isEmpty() != 1) {
				f2->push(f1->pop());
			}
			
			f1->push(letra);
			
			while (f2->isEmpty() != 1) {
				f1->push(f2->pop());
			}
		}
		cout<<"Deseja continuar? (1 - Sim / 2 - Nao): ";
		cin>>resp; 
	} while (resp == 1);
	
	f1->show();
};
