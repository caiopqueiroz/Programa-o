# include <stdio.h>

int main() {
    int vetor_p[180];
    int vetor_c[220];

    int total_c = 0;
    int total_p = 0;

    int contador = 0;
    while (1) {

        printf("Digite a matricula do aluno de calculo:  ");
        scanf("%d", &vetor_c[contador]);

        total_c = contador;

        if (vetor_c[contador] == 9999) {
            break;
        }

        contador++;
    }

    int contador2 = 0;
    while (1) {

        printf("Digite a matricula do aluno de programacao:  ");
        scanf("%d", &vetor_p[contador2]);

        total_p = contador2;

        if (vetor_p[contador2] == 9999) {
            break;
        }

        contador2++;
    }

    printf("\n");
    for (int contador = 0; contador < total_c; contador++) {

        for (int contador2 = 0; contador2 < total_p; contador2++) {

            if (vetor_c[contador] == vetor_p[contador2]) {
                printf("%d ", vetor_c[contador]);
            }
        }
    }

    //for (int contador = 0; contador < total_c; contador++) {
    //    printf("%d ", vetor_c[contador]);
    //}

    //printf("\n");
    //for (int contador = 0; contador < total_p; contador++) {
    //    printf("%d ", vetor_p[contador]);
    //}

    return 0;
}
