# include <stdio.h>

int main() {

    // ler um caractere maiúsculo - S ou M

    char comando;

    printf("Digite S ou M: ");
    scanf("%c", &comando);

    // ler uma matriz 12x12

    int dimensao = 12;

    float matriz[dimensao][dimensao];

    for (int linha = 0; linha < dimensao; linha++) {

        for (int coluna = 0; coluna < dimensao; coluna++) {

            printf("Digite um valor real: ");
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    // pegar somente a área direita da matriz

    float soma = 0;
    int total = 0;
    float media = 0;

    for (int linha = 0; linha < dimensao; linha++) {

        for (int coluna = 0; coluna < dimensao; coluna++) {

            if (coluna > 6) {

                if ((linha + coluna) > 11) {

                    if (coluna > linha) {

                        soma += matriz[linha][coluna];

                        total++;
                    }
                }
            }
        }
    }

    switch (comando) {

        case 'S':

            printf("%.1f", soma);

            break;
        case 'M':

            media = soma / (float) total;

            printf("%.1f", media);

            break;
    }

    return 0;
}
