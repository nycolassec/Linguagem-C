#include <stdio.h>

int main (void){
    char opcoes[4][15] = {{"Churrasco"}, {"Macarronada"}, {"Pizza"}, {"Sobremesa"}};
    int escolha;

    printf("\t\tA opcoes do menu sao :\n \
        1 - %s\n \
        2 - %s\n \
        3 - %s\n \
        4 - %s\n \
    ", opcoes[0], opcoes[1], opcoes[2], opcoes[3]);

    printf("Qual a sua escolha (1 á 4): ");
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
        printf("A escolha foi %s", opcoes[0]);
        break;

        case 2:
        printf("A escolha foi %s", opcoes[1]);
        break;

        case 3:
        printf("A escolha foi %s", opcoes[2]);
        break;

        case 4:
        printf("A escolha foi %s", opcoes[3]);
        break;

        default:
        printf("Escolha inválida");
        break;
    };

    return 0;
};