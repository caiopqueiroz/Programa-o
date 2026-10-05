# include <stdio.h>

int main() {
    int linhas = 10;
    int colunas = 10;
    int matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {
            if (linha != coluna) {
                printf("%d ", matriz[linha][coluna]);
            }
        }

        printf("\n");
    }

    return 0;
}
