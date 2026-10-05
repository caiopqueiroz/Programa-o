# include <stdio.h>

int main() {
    int linhas = 5;
    int colunas = 5;
    float matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            if (linha == coluna) {

                printf("%.2f ", matriz[linha][coluna]);
            }
        }
    }

    return 0;
}
