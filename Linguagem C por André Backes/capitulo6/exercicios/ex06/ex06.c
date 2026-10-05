# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    int quantidade_pares = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (numeros[contador] % 2 == 0) {

            quantidade_pares++;
        }
    }

    printf("%d", quantidade_pares);

    return 0;
}
