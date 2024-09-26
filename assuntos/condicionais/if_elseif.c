#include <stdio.h>

int main (void){
    int a, b;

    printf("A :");
    scanf("%d", &a);

    printf("b :");
    scanf("%d", &b);

    if (a > b){
        printf("%d sendo maior que %d.", a, b);
    }else if(a < b){
        printf("%d sendo menor que %d.", a, b);
    }else{
        printf("%d sendo igual a %d.", a, b);
    };
}