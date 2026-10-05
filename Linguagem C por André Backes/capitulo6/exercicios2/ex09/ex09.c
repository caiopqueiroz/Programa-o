# include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    int vetor[3] = {0};

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            vetor[coluna] += matriz[linha][coluna];
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("\n");
    for (int contador = 0; contador < 3; contador++) {

        printf("%d ", vetor[contador]);
    }

    return 0;
}
