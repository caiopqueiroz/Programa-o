# include <stdio.h>

int main() {
    float e = 0;
    int numero = 0;
    int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int contador = 1; contador <= numero; contador++) {

        // cálculo do fatorial do contador
        fatorial = 1;
        for (int contador2 = contador; contador2 > 0; contador2--) {

            // printf(" %d ", contador2);

            fatorial *= contador2;
        }

        printf("\n%d", fatorial);

        e += 1 / (float) fatorial;
    }

    printf("\n%.2f", e);

    return 0;
}
