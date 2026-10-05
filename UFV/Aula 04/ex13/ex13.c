# include <stdio.h>

int main() {
    int quantidade = 20;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro para o vetor: ");
        scanf("%d", &numeros[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros[contador]);
    }

    // novo vetor[10] - trocas: 0 - 9 / 1 - 8 / 2 - 7 / ...

    int numeros2[quantidade];
    int contador_adicional = quantidade - 1;

    for (int contador = 0; contador < quantidade; contador++) {

        numeros2[contador] = numeros[contador_adicional];
        numeros2[contador_adicional] = numeros[contador];

        contador_adicional--;
    }

    printf("\n");

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros2[contador]);
    }

    return 0;
}
