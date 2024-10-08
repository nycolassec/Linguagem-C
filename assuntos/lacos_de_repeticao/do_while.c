#include <stdio.h>

int main(){
    int i = 0;

    do{
        printf("A variavel de cotrole vale : %d \n", i);
        ++i;
    }
    while(i <= 5);

    return 0;
};