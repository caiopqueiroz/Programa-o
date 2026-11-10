# include <stdio.h>

int main() {

    // struct para um aluno de uma disciplina - matrícula, nome e vetor com 3 notas

    typedef struct {

        int matricula;
        char nome[50];
        float notas[3];
    } aluno;

    int total = 1;

    aluno alunos[total];

    for (int contador = 0; contador < total; contador++) {

        printf("Digite a matricula do aluno %d: ", contador + 1);
        scanf("%d", &alunos[contador].matricula);

        getchar();

        printf("Nome: ");
        fgets(alunos[contador].nome, 50, stdin);

        for (int nota = 0; nota < 3; nota++) {

            printf("Digite a nota %d: ", nota + 1);
            scanf("%f", &alunos[contador].notas[nota]);
        }
    }

    for (int contador = 0; contador < 3; contador++) {

        printf("%.2f ", alunos[0].notas[contador]);

        // FUNCIONOU!
    }

    return 0;
}
