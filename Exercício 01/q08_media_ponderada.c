// Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.

#include <stdio.h>

int main() {
	float nota1, nota2, nota3;
	float peso1, peso2, peso3;
	
	printf("Nota 1: ");
	scanf("%f", &nota1);
	
	printf("Nota 2: ");
	scanf("%f", &nota2);
	
	printf("Nota 3: ");
	scanf("%f", &nota3);
	
	printf("Peso 1: ");
	scanf("%f", &peso1);
	
	printf("Peso 2: ");
	scanf("%f", &peso2);
	
	printf("Peso 3: ");
	scanf("%f", &peso3);
	
	float media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
	
	printf("Media: %.2f", media);
	
	return 0;
}


