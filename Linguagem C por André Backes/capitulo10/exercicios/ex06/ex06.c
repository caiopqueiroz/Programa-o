# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(NULL));

    // int numero;
    int vetor[5];

    int *ponteiro;
    ponteiro = vetor;

    for (int contador = 0; contador < 5; contador++) {

        // numero = rand() % 10;

        vetor[contador] = rand() % 10;

        printf("%d ", vetor[contador]);

        if (*ponteiro % 2 == 0) {

            printf("%u ", ponteiro);
        }

        ponteiro++;
    }

    return 0;
}
