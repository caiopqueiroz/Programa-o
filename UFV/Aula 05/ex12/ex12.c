# include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    int nova_matriz[linhas][colunas];

    int linha_nova = 0;
    int coluna_nova = 0;

    // trocar a segunda linha pela oitava linha
    // exemplo: trocando a primeira pela segunda

    // programa real: segunda linha -> linha = 1
    // oitava linha -> linha = 7

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            // if linha == 1
            if (linha == 0) {
                // linha = 7
                linha = 1;
                nova_matriz[linha_nova][coluna_nova] = matriz[linha][coluna];
                linha = 0;
                // linha = 1
            // else if linha == 7
            } else if (linha == 1) {
                // linha = 1
                linha = 0;
                nova_matriz[linha_nova][coluna_nova] = matriz[linha][coluna];
                linha = 1;
                // linha = 7
            } else {

                nova_matriz[linha_nova][coluna_nova] = matriz[linha][coluna];
            }

            printf("%d ", nova_matriz[linha_nova][coluna_nova]);

            coluna_nova++;
        }

        printf("\n");

        linha_nova++;

        coluna_nova = 0;
    }

    linha_nova = 0;
    coluna_nova = 0;

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            if (coluna == 0) {

                coluna = 1;
                matriz[linha_nova][coluna_nova] = nova_matriz[linha][coluna];
                coluna = 0;
            } else if (coluna == 1) {

                coluna = 0;
                matriz[linha_nova][coluna_nova] = nova_matriz[linha][coluna];
                coluna = 1;
            } else {

                matriz[linha_nova][coluna_nova] = nova_matriz[linha][coluna];
            }

            printf("%d ", matriz[linha_nova][coluna_nova]);

            coluna_nova++;
        }

        printf("\n");

        linha_nova++;

        coluna_nova = 0;
    }

    int novo_indice = colunas - 1;

    printf("\n");
    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            if (linha == coluna) {

                printf("%d ", matriz[linha][novo_indice]);
                novo_indice--;
            } else if (linha + coluna == (linhas - 1)) {

                printf("%d ", matriz[linha][linha]);
            } else {

                printf("%d ", matriz[linha][coluna]);
            }
        }

        printf("\n");
    }

    return 0;
}
