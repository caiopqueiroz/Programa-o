# include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 5;
    int A[linhas][colunas];
    int B[linhas][colunas];

    int S[linhas][colunas];

    int D[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d da matriz A: ", linha, coluna);
            scanf("%d", &A[linha][coluna]);
            printf("Digite a%d%d da matriz B: ", linha, coluna);
            scanf("%d", &B[linha][coluna]);

            S[linha][coluna] = A[linha][coluna] + B[linha][coluna];

            D[linha][coluna] = A[linha][coluna] - B[linha][coluna];

            printf("\n");
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("%d ", S[linha][coluna]);
        }

        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("%d ", D[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
