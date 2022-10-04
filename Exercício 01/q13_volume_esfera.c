// Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * pi * r^3) / 3) (pi = 3,14).

#include <stdio.h>

int main() {
    float raio_esfera;

    printf("Raio da esfera: ");
    scanf("%f", &raio_esfera);

    float volume_esfera;
	volume_esfera = (4 * 3.14 * (raio_esfera * raio_esfera * raio_esfera)) / 3;
	
    printf("Volume da esfera: %.1f", volume_esfera);
    
    return 0;
}
