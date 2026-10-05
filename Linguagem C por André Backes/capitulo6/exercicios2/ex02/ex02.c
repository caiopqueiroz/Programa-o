# include <stdio.h>

int main() {
    int linhas = 4;
    int colunas = 4;
    int matriz[linhas][colunas];

    int maior;
    int linha_maior;
    int coluna_maior;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a%d%d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if ((linha == 0) && (coluna == 0)) {

                maior = matriz[0][0];
                linha_maior = 0;
                coluna_maior = 0;
            } else {

                if (matriz[linha][coluna] > maior) {

                    maior = matriz[linha][coluna];
                    linha_maior = linha;
                    coluna_maior = coluna;
                }
            }
        }
    }

    printf("a%d%d: %d", linha_maior, coluna_maior, maior);

    return 0;
}
