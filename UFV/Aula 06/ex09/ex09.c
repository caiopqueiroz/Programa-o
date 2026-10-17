# include <stdio.h>
# include <stdlib.h>

int main() {
    int inteiro = 100;
    float real = 0.5;
    char caractere = 'C';

    // Mostrando seus valores
    printf("%d %.2f %c", inteiro, real, caractere);

    // Mostrando o tamanho das variáveis
    printf("\n%d %d %d", sizeof(inteiro), sizeof(real), sizeof(caractere));

    int *ponteiro_inteiro;
    float *ponteiro_real;
    char *ponteiro_caractere;

    ponteiro_inteiro = &inteiro;
    ponteiro_real = &real;
    ponteiro_caractere = &caractere;

    // Mostrando o lugar ocupado na memória de cada variável
    printf("\n%u %u %u", ponteiro_inteiro, ponteiro_real, ponteiro_caractere);

    return 0;
}
