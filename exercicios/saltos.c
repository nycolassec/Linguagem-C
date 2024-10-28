#include <stdio.h>
#include <stdlib.h>

int main() {
    int ini, fin, sal;

    printf("\n========== Saltos ==========\n");

    printf("\nEscolha um numero inicial: ");
    scanf("%d", &ini);
    setbuf(stdin, 0);

    printf("\nEscolha um numero final: ");
    scanf("%d", &fin);
    setbuf(stdin, 0);

    while (ini >= fin) {
        printf("\nEscolha um numero Final maior que o numero Inicial: ");
        scanf("%d", &fin);
        setbuf(stdin, 0);
    };

    printf("\nEscolha o numero do salto: ");
    scanf("%d", &sal);
    setbuf(stdin, 0);

    printf("\n");

    for (int i = ini; i <= fin; i += sal) { printf("Num: %d\n", i); };

    printf("\n========== Saltos ==========");

    return 0;
}
