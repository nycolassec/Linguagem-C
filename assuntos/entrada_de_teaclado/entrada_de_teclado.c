#include <stdlib.h>
#include <stdio.h>

int main(void){

	char name[15];
	printf("Qual o seu nome: ");
	scanf("%s", name);
	printf("Bom dia %s\n", name);
	fflush(stdin);

	char letter;
	printf("Escolha uma letra: ");
	scanf("%c", &letter);
	printf("Letra %c escolhida\n", letter);
	fflush(stdin);

	int age;
	printf("Qual é a sua idade: ");
	scanf("%d", &age);
	printf("Você já  tem %d anos ? Tá veio já.", age);
	fflush(stdin);
	return 0;
}
