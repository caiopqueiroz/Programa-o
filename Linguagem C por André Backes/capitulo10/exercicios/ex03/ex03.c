# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    srand(time(NULL));

    float valores[10];

    float *ponteiro = NULL;
    ponteiro = &valores;

    for (int contador = 0; contador < 10; contador++) {

        valores[contador] = rand() % 10;

        // printf("%.2f ", valores[contador]);
        printf("%u ", ponteiro);
        ponteiro++;
    }

    return 0;
}
