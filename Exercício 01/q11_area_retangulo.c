// Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura).

#include <stdio.h>

int main() {
	float base_retangulo;
	float lado_retangulo;
	
	printf("Base: ");
	scanf("%f", &base_retangulo);
	
	printf("Lado: ");
	scanf("%f", &lado_retangulo);
	
	float area_retangulo;
	area_retangulo = base_retangulo * lado_retangulo;
	
	printf("Area do retangulo: %.1f", area_retangulo);
	
	return 0;
}
