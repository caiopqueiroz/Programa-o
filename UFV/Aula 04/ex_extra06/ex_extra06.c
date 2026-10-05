# include <stdio.h>

// objetivo: desenvolver um algoritmo que recebe um vetor de 10 números inteiros e escreve esses números em ordem crescente
// passos:
// 1 - ler um vetor de 10 números inteiros - feito
// 2 - ordenar o vetor - como?
// 3 - exibir o vetor na tela - feito

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro para o vetor: ");
        scanf("%d", &numeros[contador]);
    }

    // execução do passo 2:
    // ideia: ler o vetor - armazenar o menor valor - fazer com que o numeros[0] receba o menor valor - e a posicao antiga onde estava o menor valor receba o antigo numeros[0]

    int incremento = 0;
    int menor;
    int suporte;
    int posicao_menor;

    for (int i = 0; i < (quantidade - 1); i++) {

        int contador = incremento;

        for (contador; contador < quantidade; contador++) {

            if (contador == incremento) {

                menor = numeros[contador];

                suporte = numeros[contador];
                posicao_menor = incremento;
            } else {
                if (numeros[contador] < menor) {

                    menor = numeros[contador];
                    posicao_menor = contador;
                }
            }
        }

        numeros[incremento] = menor;
        numeros[posicao_menor] = suporte;

        incremento++;
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros[contador]);
    }

    return 0;
}
