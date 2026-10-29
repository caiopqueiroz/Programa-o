# include <stdio.h>

int main() {

    // receber um inteiro positivo e dizer se é primo ou não

    int numero = 0;

    do {

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    int total_divisores = 0;

    for (int contador = numero; contador > 0; contador--) {

        // printf("%d", contador);

        if (numero % contador == 0) {

            total_divisores++;
        }
    }

    // printf("%d", total_divisores);

    if (total_divisores > 2) {

        printf("%d nao e primo", numero);
    } else {

        printf("%d e primo", numero);
    }

    return 0;
}
