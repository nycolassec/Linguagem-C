#include <stdio.h>

int main() {
    int num;
    int i = 10;

    printf("Escolha um número :\n");
    scanf("%d", &num);

    while (i <= num) {
        if ((i % 2 == 0)) { printf("Num: %d \n", i); };
        i++;
    };

    return 0;
};
