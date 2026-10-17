# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    // Inicializando a semente aleatória com o tempo atual
    srand(time(NULL));

    int numero;
    int vetor[10];

    int *ponteiro_vetor[10];

    for (int contador = 0; contador < 10; contador++) {

        // Usando a função rand() para gerar números inteiros entre 0 e 9
        numero = rand() % 10;

        vetor[contador] = numero;
        printf("%d ", vetor[contador]);

        ponteiro_vetor[contador] = &vetor[contador];
        // printf("%u ", ponteiro_vetor[contador]);
    }

    return 0;
}
