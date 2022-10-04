// Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área = (base * altura) / 2)

#include <stdio.h>

int main() {
	float area, base, altura;

    printf("Valor da base: ");
    scanf("%f", &base);
    
    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area: %.2f", area);
    
    return 0;
}
