# include <stdio.h>

int main() {

    int dimensao;
    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &dimensao);

    int linhas = dimensao;
    int colunas = dimensao;
    int matriz[linhas][colunas];

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    int matriz_transposta[colunas][linhas];

    for (int coluna = 0; coluna < colunas; coluna++) {

        for (int linha = 0; linha < linhas; linha++) {

            matriz_transposta[coluna][linha] = matriz[linha][coluna];
        }
    }

    int transposta = 1;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            // printf("%d ", matriz_transposta[linha][coluna]);

            // Verificação:
            if (matriz[linha][coluna] != matriz_transposta[linha][coluna]) {

                transposta = 0;
            }
        }
    }

    if (transposta) {

        printf("A matriz e simetrica");
    } else {

        printf("A matriz nao e simetrica");
    }

    return 0;
}
