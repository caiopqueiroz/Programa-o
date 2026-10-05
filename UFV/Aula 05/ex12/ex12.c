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

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++)  {

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    // trocar a segunda linha pela oitava linha
    // exemplo: trocando a primeira pela segunda

    // programa real: segunda linha -> linha = 1
    // oitava linha -> linha = 7

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            // if linha == 1
            if (linha == 1) {
                // linha = 7
                linha = 7;
                printf("%d ", matriz[linha][coluna]);
                linha = 1;
                // linha = 1
            // else if linha == 7
            } else if (linha == 7) {
                // linha = 1
                linha = 1;
                printf("%d ", matriz[linha][coluna]);
                linha = 7;
                // linha = 7
            } else {

                printf("%d ", matriz[linha][coluna]);
            }
        }

        printf("\n");
    }

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            if (coluna == 3) {

                coluna = 9;
                printf("%d ", matriz[linha][coluna]);
                coluna = 3;
            } else if (coluna == 9) {

                coluna = 3;
                printf("%d ", matriz[linha][coluna]);
                coluna = 9;
            } else {

                printf("%d ", matriz[linha][coluna]);
            }
        }

        printf("\n");
    }

    printf("\n");
    for (int coluna = 0; coluna < colunas; coluna++) {

        for (int linha = 0; linha < linhas; linha++) {

            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
