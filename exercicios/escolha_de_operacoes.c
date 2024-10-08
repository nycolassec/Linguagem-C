#include <stdio.h>

int main(){
    int a,b,oprt;

    printf("Escolha um valor para o primeiro numero :");
    scanf("%d",&a);

    printf("Escolha um valor para o segundo numero :");
    scanf("%d",&b);

    printf("Qual operacao deseja fazer \n [0] Soma \n [1] Subtracao");
    scanf("%d", &oprt);

    switch(oprt){
        case 0:
            printf("O resultado sera %d", (a + b));
        break;

        case 1:
            printf("O resultdao sera %d", (a - b));
        break;

        default:
            printf("Escolha inválida");
        break;
    };

    return 0;
};