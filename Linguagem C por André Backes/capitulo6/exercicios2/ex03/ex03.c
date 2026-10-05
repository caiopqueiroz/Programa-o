# include <stdio.h>

int main() {
    int linhas = 5;
    int colunas = 5;
    int matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            if (linha == coluna) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
