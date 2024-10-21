#include <stdio.h>

int main(void){
    char a,b;

    printf("Qual o valor da variável a :");
    scanf("%c", &a);

    fflush(stdin);
    
    printf("Qual o valor da variável b :");
    scanf("%c", &b);

    printf("As letras digitadas foram %c e %c", a, b);

    return 0;
}
