# include <stdio.h>

int main() {

    // cada linha 1 dia - cada coluna 1 horário

    // matriz 7x4

    int matriz[7][4] = {{20, 25, 30, 33}, {15, 20, 12, 38}, {10, 20, 30, 30}, {9, 12, 30, 8}, {40, 40, 40, 5}, {12, 14, 16, 14}, {30, 28, 24, 19}};

    int soma = 0;

    float medias[7];

    int maior_temperatura = 0;

    int menor_temperatura = 0;

    for (int linha = 0; linha < 7; linha++) {

        printf("Dia %d ", linha + 1);

        for (int coluna = 0; coluna < 4; coluna++) {

            printf("%d ", matriz[linha][coluna]);

            soma += matriz[linha][coluna];

            if ((linha == 0) && (coluna == 0)) {

                maior_temperatura = matriz[linha][coluna];

                menor_temperatura = matriz[linha][coluna];
            } else {

                if (matriz[linha][coluna] > maior_temperatura) {


                    maior_temperatura = matriz[linha][coluna];
                }

                if (matriz[linha][coluna] < menor_temperatura) {

                    menor_temperatura = matriz[linha][coluna];
                }
            }
        }

        medias[linha] = soma / 4.0;

        soma = 0;

        printf("\n");
    }

    float maior;

    int dia_maior = 1;

    printf("\n");
    for (int contador = 0; contador < 7; contador++) {

        printf("%.1f ", medias[contador]);

        if (contador == 0) {

            maior = medias[0];
        } else {

            if (medias[contador] > maior) {

                maior = medias[contador];

                dia_maior = contador + 1;
            }
        }
    }

    printf("\nO dia %d teve maior temperatura media", dia_maior);

    printf("\nMenor temperatura registrada %d e maior %d", menor_temperatura, maior_temperatura);

    int soma_horario = 0;

    float medias_horario[4];

    for (int coluna = 0; coluna < 4; coluna++) {

        for (int linha = 0; linha < 7; linha++) {

            soma_horario += matriz[linha][coluna];
        }

        medias_horario[coluna] = soma_horario / 7.0;

        soma_horario = 0;
    }

    float maior_horario;

    int numero_maior = 1;

    for (int contador = 0; contador < 4; contador++) {

        if (contador == 0) {

            maior_horario = medias_horario[0];
        } else {

            if (maior_horario < medias_horario[contador]) {

                maior_horario = medias_horario[contador];

                numero_maior = contador + 1;
            }
        }
    }

    printf("\nO horario %d teve maior media de temperatura", numero_maior);

    return 0;
}
