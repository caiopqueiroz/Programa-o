# include <stdio.h>

int main() {
    int linhas = 3;
    int colunas = 5;
    int matriz[linhas][colunas];

    int total_valores = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            // valores entre 15 e 20 - quantidade
            if ((matriz[linha][coluna] >= 15) && (matriz[linha][coluna] <= 20)) {

                total_valores++;
            }
        }
    }

    printf("%d", total_valores);

    return 0;
}
