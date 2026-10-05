# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    int numeros_alterados[quantidade];

    for (int contador = 0; contador < quantidade;contador++) {

        if (numeros[contador] < 10) {
            numeros_alterados[contador] = 1;
        } else {
            numeros_alterados[contador] = numeros[contador];
        }
    }

    for (int contador = 0; contador < quantidade; contador++) {
        printf("%d ", numeros[contador]);
    }

    printf("\n");

    for (int contador = 0; contador < quantidade; contador++) {
        printf("%d ", numeros_alterados[contador]);
    }

    return 0;
}
