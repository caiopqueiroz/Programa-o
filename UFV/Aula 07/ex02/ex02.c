# include <stdio.h>

int main() {

    // ler dados de 10 alunos -> nome, matrícula, nota média final

    typedef struct {

        char nome[50];
        int matricula;
        float media_final;
    } aluno;

    int total = 3;

    int total_aprovados = 0;

    int total_reprovados = 0;

    aluno alunos[total];

    for (int contador = 0; contador < total; contador++) {

        printf("Digite o nome do aluno %d: ", contador + 1);
        fgets(alunos[contador].nome, 50, stdin);

        printf("Matricula: ");
        scanf("%d", &alunos[contador].matricula);

        printf("Nota media final: ");
        scanf("%f", &alunos[contador].media_final);

        if (alunos[contador].media_final >= 5) {

            total_aprovados++;
        } else {

            total_reprovados++;
        }

        getchar();
    }

    // média de corte -> 5.0 - dividir os alunos em um vetor de aprovados e um vetor de reprovados

    aluno aprovados[total_aprovados];

    aluno reprovados[total_reprovados];

    int contador_aprovados = 0;

    int contador_reprovados = 0;

    for (int contador = 0; contador < total; contador++) {

        if (alunos[contador].media_final >= 5) {

            aprovados[contador_aprovados] = alunos[contador];

            contador_aprovados++;
        } else {

            reprovados[contador_reprovados] = alunos[contador];

            contador_reprovados++;
        }
    }

    printf("APROVADOS:");
    for (int contador = 0; contador < total_aprovados; contador++) {

        printf("\n%s%d %.1f", aprovados[contador].nome, aprovados[contador].matricula, aprovados[contador].media_final);
    }

    printf("\nREPROVADOS:");
    for (int contador = 0; contador < total_reprovados; contador++) {

        printf("\n%s%d %.1f", reprovados[contador].nome, reprovados[contador].matricula, reprovados[contador].media_final);
    }

    return 0;
}
