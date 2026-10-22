# include <stdio.h>

int main() {

    char comando;

    printf("Digite 'S' ou 'M': ");
    scanf("%c", &comando);

    float matriz[12][12];

    float soma = 0;
    int total = 0;

    for (int linha = 0; linha < 12; linha++) {

        for (int coluna = 0; coluna < 12; coluna++) {

            printf("Digite um valor real: ");
            scanf("%f", &matriz[linha][coluna]);

            if (coluna > linha) {

                soma += matriz[linha][coluna];

                total++;
            }
        }
    }

    float media;

    switch (comando) {

    case 'S':

        printf("%.1f\n", soma);

        break;
    case 'M':

        media = soma / (float) total;

        printf("%.1f\n", media);

        break;
    }

    return 0;
}
