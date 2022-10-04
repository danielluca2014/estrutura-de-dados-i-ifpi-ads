// Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado * lado)

#include <stdio.h>

int main() {
	float lado_quadrado;
	
	printf("Lado: ");
	scanf("%f", &lado_quadrado);
	
	float area_quadrado = lado_quadrado * lado_quadrado;
	
	printf("Area do quadrado: %.1f", area_quadrado);
	
	return 0;
}
