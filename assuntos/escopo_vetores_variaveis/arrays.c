#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main() {
    char tamanhos[TAM] = {'P', 'M', 'G', 'A', 'Q'};
    int distancias[TAM] = {45, 76, 12, 75, 24};
    float precos[TAM] = {12.50, 50.50, 99.90, 14.50, 70.25};

    printf("\nArray de tamanhos\n");
    for(int i = 0; i < TAM; i++){
        printf("\tIndex %d - %c\n", i, tamanhos[i]);
    };

    printf("\nArray de distancias\n");
    for(int i = 0; i < TAM; i++){
        printf("\tIndex %d - %d\n", i, distancias[i]);
    };

    printf("\nArray de precos\n");
    for(int i = 0; i < TAM; i++){
        printf("\tIndex %d - %f\n", i, precos[i] );
    };



    return 0;
};
