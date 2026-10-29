# include <stdio.h>

int main() {

    int total;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &total);

    // para cada aluno, 2 notas -> média

    // logo, um vetor para as médias dos alunos

    float medias[total];

    for (int aluno = 0; aluno < total; aluno++) {

        printf("\n");

        float notas[2] = {0.0, 0.0};

        float soma = 0;

        for (int contador = 0; contador < 2; contador++) {

            printf("Digite a nota %d do aluno %d: ", (contador + 1), (aluno + 1));
            scanf("%f", &notas[contador]);

            soma += notas[contador];

            // printf("%.1f", notas[contador]);
        }

        medias[aluno] = soma / 2.0;
    }

    float soma_turma = 0;

    float media_turma = 0;

    float maior_media = 0;

    float menor_media = 0;

    int aprovados = 0;

    for (int aluno = 0; aluno < total; aluno++) {

        //printf("%.1f ", medias[aluno]);

        soma_turma += medias[aluno];

        if (aluno == 0) {

            maior_media = medias[aluno];

            menor_media = medias[aluno];
        } else {

            if (medias[aluno] > maior_media) {

                maior_media = medias[aluno];
            }
            if (medias[aluno] < menor_media) {

                menor_media = medias[aluno];
            }
        }

        if (medias[aluno] >= 7) {

            aprovados++;
        }
    }

    media_turma = soma_turma / (float) total;

    printf("\n%.1f foi a media da turma\n", media_turma);

    printf("A maior media foi %.1f e a menor foi %.1f", maior_media, menor_media);

    printf("\nO total de aprovados foi %d", aprovados);

    return 0;
}
