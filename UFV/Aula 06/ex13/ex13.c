# include <stdio.h>
# include <stdlib.h>

int main() {

    float vetor[10] = {1.5, 0.75, 2.5, 3.8, -0.5, 4.5, 7.7, 10.0, 2.25, -5.6};

    float *ponteiro;
    ponteiro = &vetor;

    for (int contador = 0; contador < 10; contador++) {

        printf("%u ", ponteiro);
        ponteiro++;
    }

    return 0;
}
