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

class Pilha{
	public:
		No *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
			No *novo = new No(n);
			if (topo == NULL) {
				topo = novo;
			} else {
				novo->prox = topo;
				topo = novo;
			}
		}
		
		char pop(){
			char item = topo->data;
			No *aux = topo;
			topo = topo->prox;

			free(aux);

			return item;
		}
		
		int isEmpty(){
			return topo == NULL;
		}

		void show(){
	    	No *temp;
			while (topo!=NULL){
				temp = topo;
				printf("%c", topo->data);
				topo = topo->prox;
				
				free(temp);
			}
		}		
};

int main(){
	Pilha *pilha = new Pilha();
	pilha->push('d');
	pilha->push('a');
	pilha->push('n');

	pilha->show();
}
