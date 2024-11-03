#include <stdio.h>

int main(){
    // Strings sem espaco
    char palavra1[] = {"Palavras"};
    char palavra2[5] = {"node"};
    char palavra3[] = {'n','a','d','a','\0'};
    char palavra4[5] = {'n', 'o', 'j', 'o', '\0'};

    printf("Palavra 1 %s\n", palavra1);
    printf("Palavra 2 %s\n", palavra2);
    printf("Palavra 3 %s\n", palavra3);
    printf("Palavra 4 %s\n", palavra4);

    printf("\nEscolha uma fruta de 4 letras: ");
    setbuf(stdin, 0);
    scanf("%s", palavra4);
    printf("\nPalavra 4 %s\n", palavra4);


    // Lendo Strings com espaco
    char fruta[50];
    setbuf(stdin, 0);
    printf("\nEScolha uma fruta de 50 letras: ");
    fgets(fruta, sizeof(fruta), stdin);
    puts(fruta);

    return 0;
};
