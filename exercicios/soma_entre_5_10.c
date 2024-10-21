#include <stdbool.h>
#include <stdio.h>

int main() {
    int num1, num2;
    bool success = false;

    printf("Escolha dois numeros de 5 a 10.\n\n");

    while (!success) {
        printf("Primeiro numero: ");
        scanf("%d", &num1);

        while (((num1 >= 5) && (num1 <= 10)) && !success) {
            printf("Segundo numero: ");
            scanf("%d", &num2);

            if (((num2 >= 5) && (num2 <= 10))) { success = true; };
        };
    };

    printf("A soma dos numeros e %d", (num1 + num2));

    return 0;
};
