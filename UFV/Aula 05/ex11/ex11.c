# include <stdio.h>

int main() {
    // Cada linha uma delegação - total de 5
    int linhas = 5;
    int colunas = 10;
    float alturas[linhas][colunas];

    float maiores_alturas[linhas];
    int suporte = 0;

    for (int linha = 0; linha < linhas; linha++) {

        for (int coluna = 0; coluna < colunas; coluna++) {

            printf("Digite a altura do atleta %d da delegacao %d: ", coluna + 1, linha + 1);
            scanf("%f", &alturas[linha][coluna]);

            if ((linha == suporte) && (coluna == 0)) {

                maiores_alturas[suporte] = alturas[linha][coluna];
            } else {

                if (alturas[linha][coluna] > maiores_alturas[suporte]) {

                    maiores_alturas[suporte] = alturas[linha][coluna];
                }
            }
        }

        suporte++;

        printf("\n");
    }

    for (int contador = 0; contador < linhas; contador++) {

        printf("%.2f ", maiores_alturas[contador]);
    }

    return 0;
}
