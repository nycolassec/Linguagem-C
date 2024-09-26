#include <stdio.h>

int main(void){
    int a;
    int b;

    printf("Escolha um valor para a :");
    scanf ("%d", &a);

    printf("Escolha um valor para b :");
    scanf ("%d", &b);

    int resultado = a + b;

    printf("Resultado : %d", resultado);
    return 0;
}