# include <stdio.h>

int main() {

    // matriz 6x8

    // 0 para livre e 1 para ocupado

    int matriz[6][8] = {0};

    while (1) {

        int comando;

        printf("\n\n1 ) Consultar assento\n2 ) Reservar\n3 ) Cancelar\n4 ) Consultar total\n5 ) Taxa de ocupacao\n6 ) Sair\n");

        printf("Digite a opcao: ");
        scanf("%d", &comando);

        matriz[1][1] = 1;

        int soma = 0;

        for (int linha = 0; linha < 6; linha++) {

            for (int coluna = 0; coluna < 8; coluna++) {

                if (matriz[linha][coluna] == 0) {

                    soma++;
                }
            }
        }

        int ocupados = 48 - soma;

        float porcentagem = 2.08 * ocupados;

        if (comando == 1) {

            int vetor[2];

            printf("Digite o assento: ");
            scanf("%d %d", &vetor[0], &vetor[1]);

            if (matriz[vetor[0]][vetor[1]] == 0) {

                printf("O assento esta livre");
            } else {

                printf("O assento nao esta livre");
            }
        }

        if (comando == 2) {

            int vetor[2];

            printf("Digite o assento: ");
            scanf("%d %d", &vetor[0], &vetor[1]);

            if (matriz[vetor[0]][vetor[1]] == 0) {

                matriz[vetor[0]][vetor[1]] = 1;

                printf("Assento reservado");
            } else {

                printf("O assento nao esta livre");
            }
        }

        if (comando == 3) {

            int vetor[2];

            printf("Digite o assento: ");
            scanf("%d %d", &vetor[0], &vetor[1]);

            if (matriz[vetor[0]][vetor[1]] == 1) {

                matriz[vetor[0]][vetor[1]] = 0;

                printf("Reserva cancelada");
            } else {

                printf("Esse assento nao estava reservado");
            }
        }

        if (comando == 4) {

            printf("Ainda ha %d assentos disponiveis", soma);
        }

        if (comando == 5) {

            printf("%.1f por cento e a ocupacao da sala", porcentagem);
        }

        if (comando == 6) {

            break;
        }
    }

    return 0;
}
