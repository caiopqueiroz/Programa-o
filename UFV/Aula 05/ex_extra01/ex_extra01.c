# include <stdio.h>

int main() {

    int matriz[4][3] = {
        {5, 2, 3},
        {5, 8, 6},
        {2, 9, 2},
        {2, 3, 3}
    };

    int maior = 0;

    // menor valor de cada linha
    int menores[4];

    // maior valor de cada coluna
    int maiores[3];

    // soma de cada uma das linhas
    int soma_linha = 0;
    int soma_linhas[4];

    // soma de cada coluna
    int soma_coluna = 0;
    int soma_colunas[3];

    // linha que possui a menor soma
    int soma_menor_linha = 0;
    int menor_linha = 0;

    // coluna com maior soma
    int soma_maior_coluna = 0;
    int maior_coluna = 0;

    // linha que possui mais '2'
    int total2 = 0;
    int linhas_total2[4];
    int suporte = 0;
    int linha_mais2 = 0;

    // linha que possui o menor valor de todos
    int menor = 0;
    int linhas_com_menor[4] = {0};

    for (int linha = 0; linha < 4; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            printf("\t%d|", matriz[linha][coluna]);

            if ((linha == 0) && (coluna == 0)) {

                maior = matriz[linha][coluna];
            } else {

                if (matriz[linha][coluna] > maior) {

                    maior = matriz[linha][coluna];
                }
            }

            if (coluna == 0) {

                menores[linha] = matriz[linha][coluna];
            } else {

                if (menores[linha] > matriz[linha][coluna]) {

                    menores[linha] = matriz[linha][coluna];
                }
            }

            soma_linha += matriz[linha][coluna];

            if (matriz[linha][coluna] == 2) {

                total2++;
            }
        }

        soma_linhas[linha] = soma_linha;
        soma_linha = 0;

        linhas_total2[linha] = total2;
        total2 = 0;

        printf("\n");
    }

    for (int coluna = 0; coluna < 3; coluna++) {

        for (int linha = 0; linha < 4; linha++) {

            if (linha == 0) {

                maiores[coluna] = matriz[linha][coluna];
            } else {

                if (matriz[linha][coluna] > maiores[coluna]) {

                    maiores[coluna] = matriz[linha][coluna];
                }
            }

            soma_coluna += matriz[linha][coluna];
        }

        soma_colunas[coluna] = soma_coluna;
        soma_coluna = 0;
    }

    for (int contador = 0; contador < 4; contador++) {

        if (contador == 0) {

            soma_menor_linha = soma_linhas[contador];
        } else {

            if (soma_linhas[contador] < soma_menor_linha) {

                soma_menor_linha = soma_linhas[contador];
                menor_linha = contador;
            }
        }
    }

    for (int contador = 0; contador < 3; contador++) {

        if (contador == 0) {

            soma_maior_coluna = soma_colunas[contador];
        } else {

            if (soma_colunas[contador] > soma_maior_coluna) {

                soma_maior_coluna = soma_colunas[contador];
                maior_coluna = contador;
            }
        }
    }

    for (int contador = 0; contador < 4; contador++) {

        if (contador == 0) {

            suporte = linhas_total2[contador];
        } else {

            if (linhas_total2[contador] > suporte) {

                suporte = linhas_total2[contador];
                linha_mais2 = contador;
            }
        }
    }

    for (int linha = 0; linha < 4; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            if ((linha == 0) && (coluna == 0)) {

                menor = matriz[linha][coluna];
            } else {

                if (matriz[linha][coluna] < menor) {

                    menor = matriz[linha][coluna];
                }
            }
        }
    }

    for (int linha = 0; linha < 4; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            if (matriz[linha][coluna] == menor) {

                linhas_com_menor[linha] = 1;
            }
        }
    }

    printf("\n%d\n", maior);

    for (int contador = 0; contador < 4; contador++) {

        printf("%d ", menores[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < 3; contador++) {

        printf("%d ", maiores[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < 4; contador++) {

        printf("%d ", soma_linhas[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < 3; contador++) {

        printf("%d ", soma_colunas[contador]);
    }

    printf("\n%d\n%d\n%d", menor_linha, maior_coluna, linha_mais2);

    printf("\n");
    for (int contador = 0; contador < 4; contador++) {

        if (linhas_com_menor[contador] == 1) {

            printf("%d ", contador);
        }
    }

    return 0;
}
