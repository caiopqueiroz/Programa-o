# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(NULL));

    float matriz[3][3];

    float *ponteiro;
    ponteiro = &matriz;

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            matriz[linha][coluna] = rand() % 10;

            printf("%.2f\t|", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            printf("%u \t|", ponteiro);
            ponteiro++;
        }

        printf("\n");
    }

    return 0;
}
