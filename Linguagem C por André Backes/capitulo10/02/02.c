# include <stdio.h>
# include <stdlib.h>

int main() {

    int *ponteiro = NULL;
    int vetor[3] = {1, 2, 3};

    // Fazendo o ponteiro apontar para o vetor - na prática: o ponteiro aponta para o primeiro elemento do vetor
    ponteiro = vetor;

    for (int contador = 0; contador < 3; contador++) {

        printf("%d ", *ponteiro);
        // Somando +1 na ponteiro, ou seja - mudando o local da memória que ele aponta para o próximo, onde está guardado o próximo elemento do vetor
        ponteiro++;
    }

    return 0;
}
