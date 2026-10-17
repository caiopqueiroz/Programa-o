# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(NULL));
    int numero;

    int matriz[100][100];

    int *ponteiro;
    ponteiro = &matriz;

    for (int linha = 0; linha < 100; linha++) {

        for (int coluna = 0; coluna < 100; coluna++) {

            *ponteiro = 0;
            ponteiro++;

            printf("%d\t|", matriz[linha][coluna]);
            //printf("%u ", ponteiro);
        }

        printf("\n");
    }

    ponteiro = &matriz;

    printf("\n");
    for (int linha = 0; linha < 100; linha++) {

        for (int coluna = 0; coluna < 100; coluna++) {

            numero = rand() % 10000;
            *ponteiro = numero;
            ponteiro++;

            printf("%d\t|", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
