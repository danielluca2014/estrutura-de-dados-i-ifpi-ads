// Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * pi *r).

#include <stdio.h>

int main() {
	float raio_circunferencia;
	
	printf("Raio da circunferencia: ");
	scanf("%f", &raio_circunferencia);
	
	float comprimento_circunferencia;
	comprimento_circunferencia = 2 * 3.14 * raio_circunferencia;
	
	printf("Area da circunferencia: %.1f", comprimento_circunferencia);
	
	return 0;
}
