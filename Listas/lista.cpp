#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno {
	int mat;
	string nome;	
} Aluno; 

Aluno lista[30];
int i = 0;

void incluirDesordenado(Aluno e) {
	if (i < 30) {
		lista[i] = e;
		i++;
		
	} else {
		cout << "Lista cheia." << endl;
	}
}

// Retorna a posição do elemento procurado;
int procura(int mat) {
	for(int j = 0; j < i; j++) {
		if(mat == lista[j].mat) {
			return j;
		} 
	}
	
	return -1;
}

// Recebe a posição e imprime o elemento na tela;
void mostrar(int pos){
	if (pos < i) {
		cout << "Matricula: " << lista[pos].mat << "\n" << "Nome: " << lista[pos].nome << endl;
	} else {
		cout << "Elemento nao encontrado." << endl;
	}
}

// Procura o elemento e depois mostra o elemento encontrado;
void consultar(int mat) {
	int achou = procura(mat);
	if (achou != -1) {
		mostrar(achou);
	} else {
		cout << "Matricula nao encontrada." << endl;
	}
}

// Estratégia 1: colocar o ultimo elemento da lista na posição do elemento removido;
void remover00(int mat) {
	int pos = procura(mat);
	lista[pos] = lista[i-1];
	i--;
}

// Estratégia 2: mover TODOS os elementos que estão APÓS o elemento que deve ser removido, UMA POSIÇÃO A FRENTE;
void remover01(int mat) {
	int pos = procura(mat);
	i--;
	
	for(int j = pos; j < i; j++) {
		lista[pos] = lista[pos + 1];
	}
}

main() {
	Aluno aluno1;
	aluno1.mat = 101;
	aluno1.nome = "Daniel";
	
	Aluno aluno2;
	aluno2.mat = 102;
	aluno2.nome = "Luca";
	
	Aluno aluno3;
	aluno3.mat = 103;
	aluno3.nome = "Santos";
	
	incluirDesordenado(aluno1);
	incluirDesordenado(aluno2);
	incluirDesordenado(aluno3);
	
	remover01(102);
	consultar(102);
}
	
	
	

