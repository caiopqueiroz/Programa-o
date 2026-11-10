# include <stdio.h>

int main() {

    // 4 setores - 5 produtos -> matriz 4 x 5

    // registrar o estoque

    // gerar um relatório

    int matriz[4][5] = {{15, 12, 10, 5, 50}, {35, 40, 7, 12, 10}, {15, 6, 7, 8, 20}, {45, 10, 15, 12, 8}};

    for (int linha = 0; linha < 4; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            printf("Digite o estoque (setor %d - produto %d): ", (linha + 1), (coluna + 1));
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    int quantidades[4];

    int soma = 0;

    int maior;

    int setor_maior = 1;

    int menor = 0;

    int setor_menor = 1;

    int produto_menor = 1;

    int soma_total = 0;

    for (int linha  = 0; linha < 4; linha++) {

        printf("Setor %d: ", (linha + 1));

        for (int coluna = 0; coluna < 5; coluna++) {

            printf("%d ", matriz[linha][coluna]);

            soma += matriz[linha][coluna];

            if ((linha == 0) && (coluna == 0)) {

                menor = matriz[0][0];
            } else {

                if (matriz[linha][coluna] < menor) {

                    menor = matriz[linha][coluna];

                    setor_menor = (linha + 1);

                    produto_menor = (coluna + 1);
                }
            }

            soma_total += matriz[linha][coluna];
        }

        quantidades[linha] = soma;

        soma = 0;

        printf("\n");
    }

    for (int contador = 0; contador < 4; contador++) {

        printf("%d ", quantidades[contador]);

        if (contador == 0) {

            maior = quantidades[0];
        } else {

            if (quantidades[contador] > maior) {

                maior = quantidades[contador];

                setor_maior = (contador + 1);
            }
        }
    }

    printf("\nSetor %d", setor_maior);

    printf("\nProduto %d do setor %d", produto_menor, setor_menor);

    printf("\n%d", soma_total);

    return 0;
}
