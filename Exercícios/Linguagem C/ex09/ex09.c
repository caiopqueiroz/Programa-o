# include <stdio.h>

int main() {

    // uma matriz 2 x 8 -> primeira linha: código e segunda: quantidades

    int matriz[2][8] = {
        {101, 102, 103, 104, 105, 106, 107, 108},
        {10, 12, 15, 5, 18, 22, 40, 2}
    };

    int comando;

    while (comando != 0) {

        printf("\n\n-- MENU --\n1 ) Consultar codigo\n2 ) Registrar entrada\n3 ) Registrar saida\n4 ) Ver estoque\n5 ) Ver estoque acabando\n");

        //int comando;

        printf("Opcao: ");
        scanf("%d", &comando);

        printf("\n");

        if (comando == 1) {

            int codigo;

            printf("Digite o codigo: ");
            scanf("%d", &codigo);

            int achei = 0;

            for (int coluna = 0; coluna < 8; coluna++) {

                if (matriz[0][coluna] == codigo) {

                    //printf("Achei seu codigo");

                    printf("|%d\t\n|%d\t", codigo, matriz[1][coluna]);

                    achei = 1;
                }
            }

            if (achei == 0) {

                printf("Nao achei seu codigo");
            }
        }

        if (comando == 2) {

            int codigo;

            printf("Digite o codigo: ");
            scanf("%d", &codigo);

            int achei = 0;

            for (int coluna = 0; coluna < 8; coluna++) {

                if (matriz[0][coluna] == codigo) {

                    //printf("Achei seu codigo");

                    //printf("|%d\t\n|%d\t", codigo, matriz[1][coluna]);
                    int entrada;

                    printf("Digite a quantidade da entrada: ");
                    scanf("%d", &entrada);

                    matriz[1][coluna] += entrada;

                    achei = 1;
                }
            }

            if (achei == 0) {

                printf("Nao achei seu codigo");
            }
        }

        if (comando == 3) {

            int codigo;

            printf("Digite o codigo: ");
            scanf("%d", &codigo);

            int achei = 0;

            for (int coluna = 0; coluna < 8; coluna++) {

                if (matriz[0][coluna] == codigo) {

                    //printf("Achei seu codigo");

                    //printf("|%d\t\n|%d\t", codigo, matriz[1][coluna]);
                    int saida;

                    printf("Digite a quantidade da saida: ");
                    scanf("%d", &saida);

                    if (matriz[1][coluna] - saida >= 0) {

                        matriz[1][coluna] -= saida;
                    } else {

                        printf("Impossivel retirar essa quantidade");
                    }

                    achei = 1;
                }
            }

            if (achei == 0) {

                printf("Nao achei seu codigo");
            }
        }

        if (comando == 4) {

            // ver estoque

            for (int linha = 0; linha < 2; linha++) {

                if (linha == 0) {

                    printf("Codigos      ");
                } else {

                    printf("Quantidades  ");
                }

                for (int coluna = 0; coluna < 8; coluna++) {

                    printf("|%d\t", matriz[linha][coluna]);
                }

                printf("\n");
            }
        }

        if (comando == 5) {

            for (int linha = 0; linha < 2; linha++) {

                if (linha == 0) {

                    printf("Codigos      ");
                } else {

                    printf("Quantidades  ");
                }

                for (int coluna = 0; coluna < 8; coluna++) {

                    if (matriz[1][coluna] < 5) {

                        printf("|%d\t", matriz[linha][coluna]);
                    }
                }

                printf("\n");
            }
        }
    }

    return 0;
}
