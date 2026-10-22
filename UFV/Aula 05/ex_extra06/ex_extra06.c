# include <stdio.h>

int main() {

    // ler o número da coluna

    // ler S para soma e M para média

    // ler 144 valores para a matriz 12x12

    int numero_linha = 0;

    printf("Digite o numero da linha: ");
    scanf("%d", &numero_linha);

    char comando;

    printf("Digite S ou M: ");
    scanf(" %c", &comando);
    //comando = getchar();

    //printf("%c", comando);

    int dimensao = 12;

    float matriz[dimensao][dimensao];

    for (int linha = 0; linha < dimensao; linha++) {

        for (int coluna = 0; coluna < dimensao; coluna++) {

            printf("Digite um valor real: ");
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    // guardar a soma de uma coluna inteira da matriz

    float soma_linha = 0;
    int total = 0;

    for (int coluna = 0; coluna < dimensao; coluna++) {

        for (int linha = 0; linha < dimensao; linha++) {

            if (linha == numero_linha) {

                soma_linha += matriz[linha][coluna];

                total++;
            }
        }
    }

    float media = 0;

    switch (comando) {

    case 'S':

        printf("%.1f", soma_linha);

        break;

    case 'M':

        media = soma_linha / (float) total;

        printf("%.1f", media);

        break;
    }

    return 0;
}
