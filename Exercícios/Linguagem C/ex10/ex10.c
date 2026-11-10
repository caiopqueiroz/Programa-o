# include <stdio.h>

int main() {

    char matriz[3][3] = {{'-', '-', '-'}, {'-', '-', '-'},{'-', '-', '-'}};

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            printf("%c ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    for (int contador = 0; contador < 9; contador++) {

        if (contador % 2 == 0) {

            printf("\nJogada do X\n");

            int linha;
            int coluna;

            printf("Digite a linha e coluna: ");
            scanf("%d %d", &linha, &coluna);

            if (matriz[linha][coluna] != '-') {

                matriz[linha][coluna] = 'X';
            } else {

                // não deixar o usuário sobrescrever uma jogada anterior
            }

            for (int linha = 0; linha < 3; linha++) {

                for (int coluna = 0; coluna < 3; coluna++) {

                    printf("%c ", matriz[linha][coluna]);
                }

                printf("\n");
            }
        } else {

            printf("\nJogada do O\n");

            int linha;
            int coluna;

            printf("Digite a linha e coluna: ");
            scanf("%d %d", &linha, &coluna);

            if (matriz[linha][coluna] == '-') {

                matriz[linha][coluna] = 'O';
            }

            for (int linha = 0; linha < 3; linha++) {

                for (int coluna = 0; coluna < 3; coluna++) {

                    printf("%c ", matriz[linha][coluna]);
                }

                printf("\n");
            }
        }
    }

    return 0;
}
