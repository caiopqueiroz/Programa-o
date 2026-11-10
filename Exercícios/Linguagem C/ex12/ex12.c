# include <stdio.h>

int main() {

    // 5 alunos e 4 disciplinas -> matriz 5x4

    float matriz[5][4] = {{10, 9.8, 7.6, 5.5, 6}, {5.6, 5.8, 5.9, 5.25, 9}, {6, 6, 6, 3.4, 10}, {7, 8, 3.4, 10, 9.9}, {4, 5, 6, 7, 1}};

    float medias[5];

    float soma = 0;

    for (int linha = 0; linha < 5; linha++) {

        printf("Aluno %d ", (linha + 1));

        for (int coluna = 0; coluna < 4; coluna++) {

            printf("|%.1f\t", matriz[linha][coluna]);

            soma += matriz[linha][coluna];
        }

        medias[linha] = soma / 4.0;

        soma = 0;

        printf("\n");
    }

    printf("\nMedias por aluno ");
    for (int contador = 0; contador < 5; contador++) {

        printf("|%.1f\t", medias[contador]);
    }

    float soma_disciplina = 0;

    float media_disciplinas[4];

    int total_aprovados[4] = {0};

    for (int coluna = 0; coluna < 4; coluna++) {

        for (int linha = 0; linha < 5; linha++) {

            soma_disciplina += matriz[linha][coluna];

            if (matriz[linha][coluna] >= 7) {

                total_aprovados[coluna]++;
            }
        }

        media_disciplinas[coluna] = soma_disciplina / 5.0;

        soma_disciplina = 0;
    }

    float melhor;

    int numero_melhor = 1;

    printf("\nMedias disciplina ");
    for (int contador = 0; contador < 4; contador++) {

        printf("|%.1f\t", media_disciplinas[contador]);
    }

    for (int contador = 0; contador < 4; contador++) {

        if (contador == 0) {

            melhor = media_disciplinas[contador];
        } else {

            if (media_disciplinas[contador] > melhor) {

                melhor = media_disciplinas[contador];

                numero_melhor = contador + 1;
            }
        }
    }

    printf("\nA disciplina %d teve maior media", numero_melhor);

    printf("\nTotal de aprovados nas disciplinas: ");
    for (int contador = 0; contador < 4; contador++) {

        printf("%d ", total_aprovados[contador]);
    }

    return 0;
}
