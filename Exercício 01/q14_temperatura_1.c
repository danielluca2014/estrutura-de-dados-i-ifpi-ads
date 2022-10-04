// Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5).

#include <stdio.h>

int main() {
    float celsius_temperature;

    printf("Temperatura em celsius: ");
    scanf("%f", &celsius_temperature);
    
	float fahrenheit_temperature;
	fahrenheit_temperature = (9 * celsius_temperature + 160) / 5;
	
    printf("Temperatura em fahrenheit: %.1f", fahrenheit_temperature);
    
    return 0;
}
