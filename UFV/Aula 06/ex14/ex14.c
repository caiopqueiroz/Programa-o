# include <stdio.h>

int main() {

    short int vetor[5] = {2, 5, 1, 4, 0};
    int vetor2[5] = {2, 5, 1, 4, 0};
    char caracteres[5] = {'a', 'b', 'm', '4', '-'};
    float valores[5] = {2.66, 0.125, 1.0, 4.99, 2.009};
    double valores2[5] = {2.66, 0.125, 1.0, 4.99, 2.009};

    short int *ponteiro_vetor;
    int *ponteiro_vetor2;
    char *ponteiro_caracteres;
    float *ponteiro_valores;
    double *ponteiro_valores2;

    ponteiro_vetor = &vetor;
    ponteiro_vetor2 = &vetor2;
    ponteiro_caracteres = &caracteres;
    ponteiro_valores = &valores;
    ponteiro_valores2 = &valores2;

    // Descobrir quantos bytes para cada tipo de dado - ou seja, de quanto em quanto pula o espaço alocado na memória de um elemento do vetor para o próximo

    int suporte;
    int suporte2;

    for (int contador = 0; contador < 2; contador++) {

        if (contador == 0) {

            suporte = ponteiro_vetor;
        } else if (contador == 1) {

            suporte2 = ponteiro_vetor;

            printf("%d - %d = %d byte para cada short int", suporte2, suporte, (suporte2 - suporte));
        }

        ponteiro_vetor++;
    }

    suporte = 0;
    suporte2 = 0;

    for (int contador = 0; contador < 2; contador++) {

        if (contador == 0) {

            suporte = ponteiro_vetor2;
        } else if (contador == 1) {

            suporte2 = ponteiro_vetor2;

            printf("\n%d - %d = %d byte para cada int", suporte2, suporte, (suporte2 - suporte));
        }

        ponteiro_vetor2++;
    }

    suporte = 0;
    suporte2 = 0;

    for (int contador = 0; contador < 2; contador++) {

        if (contador == 0) {

            suporte = ponteiro_caracteres;
        } else if (contador == 1) {

            suporte2 = ponteiro_caracteres;

            printf("\n%d - %d = %d byte para cada caractere", suporte2, suporte, (suporte2 - suporte));
        }

        ponteiro_caracteres++;
    }

    suporte = 0;
    suporte2 = 0;

    for (int contador = 0; contador < 2; contador++) {

        if (contador == 0) {

            suporte = ponteiro_valores;
        } else if (contador == 1) {

            suporte2 = ponteiro_valores;

            printf("\n%d - %d = %d byte para cada float", suporte2, suporte, (suporte2 - suporte));
        }

        ponteiro_valores++;
    }

    suporte = 0;
    suporte2 = 0;

    for (int contador = 0; contador < 2; contador++) {

        if (contador == 0) {

            suporte = ponteiro_valores2;
        } else if (contador == 1) {

            suporte2 = ponteiro_valores2;

            printf("\n%d - %d = %d byte para cada double", suporte2, suporte, (suporte2 - suporte));
        }

        ponteiro_valores2++;
    }

    return 0;
}
