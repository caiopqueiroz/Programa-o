# include <stdio.h>

int main() {
    int linhas = 6;
    int colunas = 3;
    int matriz[linhas][colunas];

    int maior;
    int linha_maior = 0;
    int coluna_maior = 0;

    int menor;
    int linha_menor = 0;
    int coluna_menor = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if ((linha == 0) && (coluna == 0)) {
                maior = matriz[linha][coluna];
                menor = matriz[linha][coluna];
            } else {
                if (matriz[linha][coluna] > maior) {

                    maior = matriz[linha][coluna];
                    linha_maior = linha;
                    coluna_maior = coluna;
                }

                if (matriz[linha][coluna] < menor) {

                    menor = matriz[linha][coluna];
                    linha_menor = linha;
                    coluna_menor = coluna;
                }
            }
        }
    }

    printf("%d na posicao %d%d\n%d na posicao %d%d", maior, linha_maior, coluna_maior, menor, linha_menor, coluna_menor);

    return 0;
}
