# include <stdio.h>

int main() {

    int quantidade = 10;

    int numeros[quantidade];

    int maior = 0;

    int menor = 0;

    int posicao_maior = 0;

    int posicao_menor = 0;

    int soma = 0;

    int total_pares = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (contador == 0) {

            maior = numeros[contador];
            menor = numeros[contador];
        } else {

            if (numeros[contador] > maior) {

                maior = numeros[contador];
                posicao_maior = contador;
            }
            if (numeros[contador] < menor) {

                menor = numeros[contador];
                posicao_menor = contador;
            }
        }

        soma += numeros[contador];

        if (numeros[contador] % 2 == 0) {

            total_pares++;
        }
    }

    printf("\nMaior: %d em %d e Menor: %d em %d", maior, posicao_maior, menor, posicao_menor);

    float media = soma / (float) quantidade;

    printf("\nA media dos numeros e %.1f", media);

    printf("\n%d e o total de numeros pares", total_pares);

    int total_acima = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        if (numeros[contador] > media) {

            total_acima++;
        }
    }

    printf("\n%d numeros estao acima da media", total_acima);

    return 0;
}
