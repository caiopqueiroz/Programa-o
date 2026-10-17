# include <stdio.h>
# include <stdlib.h>

int main() {

    int inteiro = 10;
    float real = 2.5;

    int *ponteiro_inteiro;
    float *ponteiro_real;

    ponteiro_inteiro = &inteiro;
    ponteiro_real = &real;

    // Valores
    printf("%d %.2f", inteiro, real);

    // Endereços na memória
    printf("\n%u %u", &inteiro, &real);

    // Valores dos ponteiros
    printf("\n%u %u", ponteiro_inteiro, ponteiro_real);

    // Endereços dos ponteiros
    printf("\n%u %u", &ponteiro_inteiro, &ponteiro_real);

    // Valores apontados pelos ponteiros
    printf("\n%d %.2f", *ponteiro_inteiro, *ponteiro_real);

    return 0;
}
