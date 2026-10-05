# include <stdio.h>
# include <math.h>

int main() {
    int linhas = 5;
    int colunas = 5;
    float matriz[linhas][colunas];

    float cubos[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);

            cubos[linha][coluna] = pow(matriz[linha][coluna], 3);
        }
    }

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("%.2f ", cubos[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
