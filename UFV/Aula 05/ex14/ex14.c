 # include <stdio.h>

 int main() {
    int C; int D; int E; int F;

    do {
        printf("Digite numeros inteiros para C D E F: ");
        scanf("%d %d %d %d", &C, &D, &E, &F);
    } while ((C > 6) || (D > 6) || (E > 6) || (F > 6) || (C <= 0) || (D <= 0) || (E <= 0) || (F <= 0) );

    int A[C][D];
    int B[E][F];

    if (D != E) {

        printf("O produto matricial e impossivel");
    } else {

        printf("O produto matricial e possivel");

        printf("\n");
        for (int linha = 0; linha < C; linha++) {

            for (int coluna = 0; coluna < D; coluna++) {

                printf("Digite a%d%d: ", linha, coluna);
                scanf("%d", &A[linha][coluna]);
            }
        }
        printf("\n");
        for (int linha = 0; linha < E; linha++) {

            for (int coluna = 0; coluna < F; coluna++) {

                printf("Digite b%d%d: ", linha, coluna);
                scanf("%d", &B[linha][coluna]);
            }
        }

        int G[C][F];
        int linhas = C;
        int colunas = F;

        int suporte = D;

        for (int linha = 0; linha < linhas; linha++) {

            for (int coluna = 0; coluna < colunas; coluna++) {

                G[linha][coluna] = 0;

                for (int contador = 0; contador < suporte; contador++) {

                    G[linha][coluna] += (A[linha][contador] * B[contador][coluna]);
                }
            }
        }

        printf("\n");
        for (int linha = 0; linha < linhas; linha++) {

            for (int coluna = 0; coluna < colunas; coluna++) {

                printf("%d ", G[linha][coluna]);
            }

            printf("\n");
        }
    }

    return 0;
 }

