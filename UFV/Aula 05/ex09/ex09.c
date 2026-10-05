# include <stdio.h>

int main() {
    int linhas = 10;
    int colunas = 10;
    int matriz[linhas][colunas];

    int suporte = linhas - 1;

    for (int i = 0; i < linhas; i++) {

        for (int j = 0; j < colunas; j++) {

            printf("Digite a%d%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {

        for (int j = 0; j < colunas; j++) {

            if (i + j == suporte) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
