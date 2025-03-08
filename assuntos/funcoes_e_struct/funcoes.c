#include <stdio.h>

void separador() {
    printf("-----");
}

int fatorial(int num, int fat) {
    printf("\n%d * %d = %d\n", fat, num, (fat * num));
    separador();

    if ((num == 0) || (num == 1)) return fat;
    fatorial((num - 1), (fat * num));
}


int main() {
    int num;
    int fat;

    printf("Escolha um numero: ");
    scanf("%d", &num);
    setbuf(stdin, 0);

    fat = fatorial((num - 1), num);

    return 0;
}
