#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No {
	public:
		int mat;
		char nome[23];
		No *prox;
		
		No(int m, char n[23]) {
			mat = m;
			strcpy(nome, n);			
			prox = NULL;
		}
};

class Lista {
	public:
		No *inicio;
		No *fim;
	
	    Lista() {
	    	inicio = NULL;
	    	fim = NULL;
		}	
		
		void addToFinal(int m, char n[23]) {
			No *novo = new No(m, n);
			
			if (fim == NULL) {
				inicio = novo;
				fim = novo;
			}
			else {
				fim->prox = novo;
				fim = novo;
			}
		}
			
		int lst_vazia() {
			return (inicio == NULL);
		}
		
		void addToInicio(int m, char n[23]){
			No *novo = new No(m, n);
			
			if (inicio == NULL) {
				inicio = novo;
				fim = novo;
			}
			else {
				novo->prox = inicio;
				inicio = novo;
			}	
		}
		
		
		void mostra() {
			if (lst_vazia()) {
				cout << "\nLista vazia!!!";
			}
			else {
				No *elemento = inicio;
				
				while (elemento != NULL) {
					cout << "Matricula: " << elemento->mat << "\n" << "Nome: " << elemento->nome << endl;
					elemento = elemento->prox;
				}
				
				free(elemento);
			}
		}
		
		int remove(int mat){
			No *atual = inicio;
			No *anterior = NULL;
			
			if (atual->mat == mat) { 
					if (atual == inicio) { 
						inicio = inicio->prox; 
					
					} else if (atual == fim) { 
						fim = anterior;
						fim->prox = NULL;
						
					} else {
						anterior->prox = atual->prox; 
						
					}
				}

				anterior = atual; 
				atual = atual->prox; 
		}
		
		No *busca(int mat){
			No *atual = inicio; 

			while (atual != NULL) { 
				if (atual->mat == mat) {
					cout << "Matricula: " << atual->mat << "\n" << "Nome: " << atual->nome << endl;
					
				} 
				
				atual = atual->prox; 
			
			}

			cout << "Elemento nao encontrado.";
		}
		
		void removeTodos() {
			No *atual = inicio;
			No *proximo = NULL;
			
			while (atual != NULL) {
					proximo = atual->prox;
					cout << "\nApaga:" << atual->nome;
					free(atual);
					atual = proximo;						
			}
			inicio = atual;
		}
		
		Lista *crialistainversa() {
			Lista *listaInversa = new Lista();
			
			No *atual = inicio;
			
			while (atual != NULL) {
				listaInversa->addToInicio(atual->mat, atual->nome);
				atual = atual->prox;
			}
			
			return listaInversa;
		}
};

main(){
Lista *l = new Lista();
	l->addToFinal(1,"Joao");
	l->addToFinal(2,"Gabriela");
	l->addToFinal(3,"Fabiola");
	l->addToInicio(5,"Joana Oliveira");
	l->addToInicio(6,"Cristiano Oliveira");
	l->mostra();
	
	Lista *listaInversa = l->crialistainversa();
	listaInversa->mostra();
}
