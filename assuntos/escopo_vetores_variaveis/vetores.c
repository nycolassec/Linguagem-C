#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("========== Jogo da velha ==========\n");

    char tab[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int col, lin;
    bool on = true;
    bool play = true;

    while (on) {
        printf(
            "\n\n %c | %c | %c \n---|---|---\n %c | %c | %c\n---|---|---\n %c "
            "| % c | % c \n\n",
            tab[0][0], tab[0][1], tab[0][2], tab[1][0], tab[1][1], tab[1][2], tab[2][0], tab[2][1],
            tab[2][2]);

        printf("\nEscolha a linha(1 a 3): ");
        scanf("%d", &lin);
        setbuf(stdin, 0);

        printf("\nEscolha a coluna(1 a 3): ");
        scanf("%d", &col);
        setbuf(stdin, 0);

        lin--;
        col--;

        tab[lin][col] = play ? 'X' : 'O';
        play = play ? false : true;
    }

    printf("========== Jogo da velha ==========\n");
    return 0;
}
