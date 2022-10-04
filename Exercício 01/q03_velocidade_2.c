// Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)

#include <stdio.h>

main() {
    float velocidade_kmh;
    printf("Velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    printf("Velocidade em m/s: %f", velocidade_kmh / 3.6);
}
