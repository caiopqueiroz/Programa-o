# include <stdio.h>

int main() {
    int quantidade = 30;
    int numeros[quantidade];
    int a;

    printf("Digite um numero inteiro para a variavel a: ");
    scanf("%d", &a);

    printf("\n");

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um valor para o vetor: ");
        scanf("%d", &numeros[contador]);
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", (numeros[contador] * a));

        if ((numeros[contador] * a) % 2 == 0) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }

    return 0;
}
