# include <stdio.h>

int main() {
    int numeros[6];

    for (int contador = 0; contador < 6; contador++)  {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (contador == 5) {

            printf("\n");
            for (int contador = 5; contador > -1; contador--) {

                printf("%d ", numeros[contador]);
            }
        }
    }

    return 0;
}
