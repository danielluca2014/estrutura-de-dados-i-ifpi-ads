// Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: num = 532 ; inverso =235)

#include <stdio.h>

int main() {
	int num;
	printf("Num: ");
	scanf("%d", &num);
	
	int num_invertido;
	int centena, dezena, unidade;
	int resto_1, resto_2;
	
	centena = num / 100;
	dezena = (num % 100) / 10;
	unidade = (num % 100) % 10;
	
	num_invertido = (unidade * 100) + (dezena * 10) + centena;
	
	printf("Inverso: %d", num_invertido);
	
	return 0;	
}

