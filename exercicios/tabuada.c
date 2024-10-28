#include <stdio.h>
#include <stdlib.h>

int main() {
    int tab;

    printf("\n\n========== Tabuada maluca ==========\n\n");

    printf("Escolha de o numero do qual a tabuada lhe interessa, mero mortal: ");
    scanf("%d", &tab);

    for (int i = 0; i <= 10; i++) { printf("\n%d x %d = %d", i, tab, (i * tab)); };

    printf("\n\n========== Tabuada maluca ==========\n\n");
    return 0;
};
