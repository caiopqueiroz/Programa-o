# include <stdio.h>

int main() {

    // matriz para informações sobre N alunos

    // cada aluno -> 1 linha

    // cada aluno -> colunas: número da matrícula / sexo / curso (1 a 5) / rendimento (1 a 100)

    // matriz N por 4

    // ler o valor de N

    int N;

    do {

        printf("Digite o valor N de alunos: ");
        scanf("%d", &N);
    } while (N > 2000);

    // ler informações sobre os N alunos

    int matriz[N][4];

    for (int linha = 0; linha < N; linha++) {

        printf("\nAluno %d\n", linha + 1);

        for (int coluna = 0; coluna < 4; coluna++) {

            if (coluna == 0) {

                printf("Numero da matricula: ");
            } else if (coluna == 1) {

                printf("Sexo (1/0): ");
            } else if (coluna == 2) {

                printf("Curso (1/2/3/4/5): ");
            } else {

                printf("Coeficiente de rendimento: ");
            }
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //for (int linha = 0; linha < N; linha++) {

    //    for (int coluna = 0; coluna < 4; coluna++) {

    //        printf("%d ", matriz[linha][coluna]);
    //    }

    //    printf("\n");
    //}

    // mostrar a média dos coeficientes de cada curso

    float media_cursos[5] = {0, 0, 0, 0, 0};

    int soma_coeficientes[5] = {0};

    int total_alunos_curso[5] = {0};

    for (int linha = 0; linha < N; linha++) {

        for (int coluna = 0; coluna < 4; coluna++) {

            if (coluna == 3) {

                switch (matriz[linha][2]) {

                    case 1:

                        soma_coeficientes[0] += matriz[linha][coluna];
                        total_alunos_curso[0]++;

                        break;
                    case 2:

                        soma_coeficientes[1] += matriz[linha][coluna];
                        total_alunos_curso[1]++;

                        break;
                    case 3:

                        soma_coeficientes[2] += matriz[linha][coluna];
                        total_alunos_curso[2]++;

                        break;
                    case 4:

                        soma_coeficientes[3] += matriz[linha][coluna];
                        total_alunos_curso[3]++;

                        break;
                    case 5:

                        soma_coeficientes[4] += matriz[linha][coluna];
                        total_alunos_curso[4]++;

                        break;
                }
            }
        }
    }

    printf("\n");
    for (int contador = 0; contador < 5; contador++) {

        if (total_alunos_curso[contador] != 0) {

            media_cursos[contador] = soma_coeficientes[contador] / (float) total_alunos_curso[contador];
        }

        printf("Media do curso %d: %.2f\n", (contador + 1), media_cursos[contador]);
    }

    // mostrar número da matrícula e o sexo do aluno do curso 4 que obteve o melhor coeficiente

    int melhor_coeficiente = 0;
    int sexo = 0;
    int matricula = 0;

    for (int linha = 0; linha < N; linha++) {

        for (int coluna = 0; coluna < 4; coluna++) {

            if (matriz[linha][2] == 4) {

                if (linha == 0) {

                    melhor_coeficiente = matriz[linha][coluna];
                    sexo = matriz[linha][1];
                    matricula = matriz[linha][0];
                } else {

                    if (matriz[linha][coluna] > melhor_coeficiente) {

                        melhor_coeficiente = matriz[linha][coluna];
                        sexo = matriz[linha][1];
                        matricula = matriz[linha][0];
                    }
                }
            }
        }
    }

    printf("\nMelhor coeficiente do curso 4: %d %d", matricula, sexo);

    return 0;

}
