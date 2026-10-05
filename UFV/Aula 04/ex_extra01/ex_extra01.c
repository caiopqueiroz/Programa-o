# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (numeros[contador] <= 0) {

            numeros[contador] = 1;
        }
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("X[%d] = %d\n", contador, numeros[contador]);
    }

    return 0;
}
