# include <stdio.h>

int main() {

    int quantidade = 10;

    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros[contador]);
    }

    int numeros_ordenados[quantidade];

    for (int numero = 0; numero < quantidade; numero++) {

        int menor = 0;

        int posicao_menor = 0;

        int maior = 0;

        for (int contador = 0; contador < quantidade; contador++) {

            if (contador == 0) {

                menor = numeros[contador];

                maior = numeros[contador];
            } else {

                if (numeros[contador] < menor) {

                    menor = numeros[contador];

                    posicao_menor = contador;
                }
                if (numeros[contador] > maior) {

                    maior = numeros[contador];
                }
            }
        }

        numeros[posicao_menor] = maior;

        numeros_ordenados[numero] = menor;
    }

    printf("\n");

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros_ordenados[contador]);
    }

    return 0;
}
