// Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

#include <stdio.h>

int main() {
    int num_1;
    int num_2;
    
    printf("Num 1: ");
    scanf("%d", &num_1);
    
    printf("Num 2: ");
    scanf("%d", &num_2);
    
    int quociente;
    quociente = num_1 / num_2;
    
    int resto;
    resto = num_1 % num_2;
    
    printf("Quociente: %d \nResto: %d", quociente, resto);
    
    return 0;
}

