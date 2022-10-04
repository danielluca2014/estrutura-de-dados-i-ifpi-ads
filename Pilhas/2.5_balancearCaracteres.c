#include <stdio.h>
#include <stdbool.h>
#include "pilha.h"

bool isBalanced(char characteres[]) {
    Pilha P = pilha(100);

    for (int i = 0; i < 100; i++) {
        char character = characteres[i];
        if (character == '(' || character == '{' || character == '[') {
            empilha(character, P);

        } else if (character == ')') {
            if (desempilha(P) != '(') {
                return false;
            }

        }  else if (character == '}') {
            if (desempilha(P) != '{') {
                return false;
            }

        }  else if (character == ']') {
            if (desempilha(P) != '[') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    char characters[100] = "{[(}])";

    if (isBalanced(characters)) {
        printf("Balanceada");
    } else {
        printf("Nao balanceada");
    }

    return 0;
}
    

 