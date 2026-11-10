# include <stdio.h>

int main() {

    // usando matrizes e ponteiros

    // uma empresa com três lojas e cada uma vende os mesmos 4 produtos -> matriz 3x4

    int matriz[3][4] = {{10, 12, 15, 20}, {5, 10, 20, 15}, {40, 2, 15, 20}};

    int *ponteiro;

    ponteiro = &matriz;

    int somas[3] = {0};

    for (int linha = 0; linha < 3; linha++) {

        printf("Loja %d ", linha + 1);

        for (int coluna = 0; coluna < 4; coluna++) {

            printf("|%d\t", *ponteiro);

            somas[linha] += *ponteiro;

            ponteiro++;
        }

        printf("\n");
    }

    for (int contador = 0; contador < 3; contador++) {

        printf("%d ", somas[contador]);
    }

    ponteiro = &matriz;

    int soma_produtos[4] = {0};

    float media_produtos[4];

    for (int coluna = 0; coluna < 4; coluna++) {

        for (int linha = 0; linha < 3; linha++) {

            soma_produtos[coluna] += matriz[linha][coluna];
        }

        media_produtos[coluna] = soma_produtos[coluna] / 3.0;
    }

    int maior;

    int numero_maior = 1;

    printf("\nQuantidade media vendida de cada produto ");
    for (int contador = 0; contador < 4; contador++) {

        printf("%.1f ", media_produtos[contador]);

        if (contador == 0) {

            maior = soma_produtos[0];
        } else {

            if (soma_produtos[contador] > maior) {

                maior = soma_produtos[contador];

                numero_maior = contador + 1;
            }
        }
    }

    printf("\nO produto %d vendeu mais", numero_maior);

    return 0;
}
