// Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).

#include <stdio.h>

int main() {
    float fahrenheit_temperature;

    printf("Temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit_temperature);
    
	float celsius_temperature;
	celsius_temperature = (5 * fahrenheit_temperature - 160) / 9;
	
    printf("Temperatura em fahrenheit: %.1f", celsius_temperature);
    
    return 0;
}
