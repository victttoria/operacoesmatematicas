#include <stdio.h>

int dividir(int a, int b) {
    if (b == 0) {
        printf("Erro! divisão por 0 não é permitida.");
    }
    return a / b;
}