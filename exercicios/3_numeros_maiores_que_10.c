#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite o valor de A :");
    scanf("%d", &a);

    printf("Digite o valor de B :");
    scanf("%d", &b);

    printf("Digite o valor de C :");
    scanf("%d", &c);

    if ((a > 10) || (b > 10) || (c > 10)) {
        printf("Pelo menos um numero e maior do que 10.");
    } else {
        printf("Nenhum número é maior do que 10.");
    }
    return 0;
}
