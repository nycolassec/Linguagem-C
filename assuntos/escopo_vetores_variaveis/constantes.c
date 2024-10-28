#include <stdio.h>
#include <stdlib.h>

// Definindo constantes no cabeçalho
#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

int main() {
    // Definindo constante na funcao main
    const int LADO = 10;

    printf("%d\n", CONSTANTE);
    printf("%f\n", QUEBRADO);
    printf("%c\n", LETRA);
    printf("%d\n", LADO);

    return 0;
};
