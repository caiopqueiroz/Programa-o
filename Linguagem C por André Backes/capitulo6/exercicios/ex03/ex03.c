# include <stdio.h>

int main() {
    float valores[5];
    float soma = 0.0;
    float media = 0.0;

    for (int contador = 0; contador < 5; contador++) {

        printf("Digite um valor real: ");
        scanf("%f", &valores[contador]);

        if (contador == 4) {

            printf("\n");
            for (int contador = 0; contador < 5; contador++) {

                printf("%.2f ", valores[contador]);

                soma += valores[contador];
            }
        }
    }

    media = soma / 5.0;
    printf("\n%.2f", media);

    return 0;
}
