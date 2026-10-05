# include <stdio.h>

int main() {
    int linhas = 4;
    int colunas = 4;
    int matriz[linhas][colunas];

    int valores_altos = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if (matriz[linha][coluna] > 10) {

                valores_altos++;
            }
        }
    }

    printf("%d", valores_altos);

    return 0;
}
