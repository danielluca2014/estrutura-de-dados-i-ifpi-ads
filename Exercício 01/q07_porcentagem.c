// Leia um valor em real (R$), calcule e escreva 70% deste valor.

#include <stdio.h>

int main() {
	float valor, novo_valor;
	printf("Valor em real: ");
	scanf("%f", &valor);
	
	novo_valor = valor * 0.7;
	
	printf("Novo valor: %.2f", novo_valor); 
	
	return 0;
}
