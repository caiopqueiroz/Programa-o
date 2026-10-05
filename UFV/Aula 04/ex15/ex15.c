# include <stdio.h>
# include <math.h>

int main() {
    int quantidade = 10;
    int quadrados[quantidade];
    int numero;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro para o vetor: ");
        scanf("%d", &numero);

        numero = pow(numero, 2);
        quadrados[contador] = numero;
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", quadrados[contador]);
    }

    return 0;
 }
