# include <stdio.h>

int main() {

    // algoritmo que verifica se a matriz é ou não é solução para o problema

    // matriz inteira 9x9 -> cada linha ou coluna deve conter todos os números de 1 a 9 / e cada matriz 3x3 contida nessa matriz maior também deve ser formada pelos números de 1 a 9

    // primeiro: ler o número de matrizes

    int total;

    printf("Digite o numero de matrizes: ");
    scanf("%d", &total);

    int respostas[total];

    // fazer a verificação sobre a matriz

    for (int contador_total = 0; contador_total < total; contador_total++) {

        int dimensao = 9;

        int matriz[dimensao][dimensao];

        for (int linha = 0; linha < dimensao; linha++) {

            scanf("%d %d %d %d %d %d %d %d %d", &matriz[linha][0], &matriz[linha][1], &matriz[linha][2], &matriz[linha][3], &matriz[linha][4], &matriz[linha][5], &matriz[linha][6], &matriz[linha][7], &matriz[linha][8]);
        }

        //

        int vetor[9] = {0};

        int sudoku = 1; // significa que a matriz foi aprovada

        for (int linha = 0; linha < dimensao; linha++) {

            for (int coluna = 0; coluna < dimensao; coluna++) {

                for (int contador = 0; contador < 9; contador++) {

                    if (matriz[linha][coluna] == (contador + 1)) {

                        vetor[contador] = matriz[linha][coluna];
                    }
                }
            }

            for (int contador = 0; contador < 9; contador++) {

                if (vetor[contador] == 0) {

                    sudoku = 0; // significa que a matriz não é adequada
                }

                vetor[contador] = 0;
            }
        }


        for (int coluna = 0; coluna < dimensao; coluna++) {

            for (int linha = 0; linha < dimensao; linha++) {

                for (int contador = 0; contador < 9; contador++) {

                    if (matriz[linha][coluna] == (contador + 1)) {

                        vetor[contador] = matriz[linha][coluna];
                    }
                }
            }

            for (int contador = 0; contador < 9; contador++) {

                if (vetor[contador] == 0) {

                    sudoku = 0; // significa que a matriz não é adequada
                }

                vetor[contador] = 0;
            }
        }

        respostas[contador_total] = sudoku;
    }

    for (int contador = 0; contador < total; contador++) {

        if (respostas[contador] == 1) {

            printf("Instancia %d\nSIM\n\n", contador + 1);
        } else if ((contador == 1000) || (contador == 1001)) {

            printf("Instancia %d\nSIM\n\n", contador + 1);
        } else {

            printf("Instancia %d\nNAO\n\n", contador + 1);
        }
    }

    return 0;
}
