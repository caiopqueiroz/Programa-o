# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro para o vetor: ");
        scanf("%d", &numeros[contador]);
    }

    printf("\n");

    int numero;
    printf("Digite um numero inteiro para ser comparado ao vetor: ");
    scanf("%d", &numero);

    for (int contador = 0; contador < quantidade; contador++) {

        if (numeros[contador] < numero) {
            printf("%d ", numeros[contador]);
        }
    }

    return 0;
}
