 # include <stdio.h>

 int main() {
    int linhas = 5;
    int colunas = 5;
    int matriz[linhas][colunas];

    int soma = 0;
    float media = 0.0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if (linha == coluna) {

                soma += matriz[linha][coluna];
            }
        }
    }

    media = (float) soma / (float) colunas;

    printf("%.2f", media);

    return 0;
 }
