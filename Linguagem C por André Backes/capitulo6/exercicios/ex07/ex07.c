# include <stdio.h>

int main() {
    int quantidade = 10;
    int x[quantidade];

    int maior = 0;
    int menor = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &x[contador]);

        if (contador == 0) {

            maior = x[contador];
            menor = x[contador];
        } else {

            if (x[contador] > maior) {

                maior = x[contador];
            }
            if (x[contador] < menor) {

                menor = x[contador];
            }
        }
    }

    printf("%d %d", maior, menor);

    return 0;
}
