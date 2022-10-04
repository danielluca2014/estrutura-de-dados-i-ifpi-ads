// Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).

#include <stdio.h>

float main(){
    float dolar;
    dolar = 5.17;

    float dolar_input;
    printf("Valor em dolar: ");
    scanf("%f", &dolar_input);

    float valor_em_real;
    valor_em_real = dolar_input * dolar;

    printf("Valor em real: %.2f", valor_em_real);

    return 0;
}