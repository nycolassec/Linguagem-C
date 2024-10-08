#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

int max = 22;
int min = 6;
int r;

r = (rand() % (max - min + 1)) + min;
printf("Numero gerado : %d", r);

r = (rand() % (max - min + 1)) + min;
printf("\nNumero gerado : %d", r);

r = (rand() % (max - min + 1)) + min;
printf("\nNumero gerado : %d", r);

    return 0;
}