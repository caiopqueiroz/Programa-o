# include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    int soma = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if (linha + coluna == 2) {

                soma += matriz[linha][coluna];
            }
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("%d", soma);

    return 0;
}
