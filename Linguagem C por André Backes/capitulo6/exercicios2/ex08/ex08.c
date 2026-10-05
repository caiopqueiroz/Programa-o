# include <stdio.h>
# include <math.h>

int main() {
    int matriz[10][10];

    for (int linha = 0; linha < 10; linha++) {

        for (int coluna = 0; coluna < 10; coluna++) {

            if (linha < coluna) {

                matriz[linha][coluna] = (2 * linha) + (7 * coluna) - 2;
            } else if (coluna < linha) {

                matriz[linha][coluna] = 4 * pow(linha, 3) + 5 * pow(coluna, 2) + 1;
            } else {

                matriz[linha][coluna] = 3 * pow(linha, 2) - 1;
            }

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
