# include <stdio.h>

int main() {
    int linhas = 4;
    int colunas = 4;
    int matriz[linhas][colunas];

    int total_negativos = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if (matriz[linha][coluna] < 0) {

                total_negativos++;
            }
        }
    }

    printf("%d", total_negativos);

    return 0;
}
