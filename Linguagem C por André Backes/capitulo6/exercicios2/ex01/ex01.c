# include <stdio.h>

int main() {
    int matriz[3][3];
    int menor;

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {

            printf("Digite um numero inteiro para a posicao %d %d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            if ((linha == 0) && (coluna == 0)) {

                menor = matriz[linha][coluna];
            } else {

                if (matriz[linha][coluna] < menor) {

                    menor = matriz[linha][coluna];
                }
            }
        }
    }

    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("%d", menor);

    return 0;
}
