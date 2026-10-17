# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    // srand(time(NULL));

    int numeros[5];

    int *ponteiro;
    ponteiro = &numeros;

    for (int contador = 0; contador < 5; contador++) {

        // numeros[contador] = rand() % 20;
        printf("Digite um numero inteiro: ");
        scanf("%d", ponteiro);

        // printf("%d ", *ponteiro);

        ponteiro++;
    }

    ponteiro = &numeros;

    for (int contador = 0; contador < 5; contador++) {

        printf("%d ", (*ponteiro * 2));

        ponteiro++;
    }

    return 0;
}
