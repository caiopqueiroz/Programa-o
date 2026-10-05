# include <stdio.h>

int main() {
    // alunos cursando simultaneamente programação e cálculo
    // vetor P - matrícula dos alunos de programação
    // vetor C - matrícula dos alunos de cálculo
    // ambos os vetores encerram com a matriícula fictícia 9999

    // exibir as matrículas dos alunos presentes nas duas disciplinas
    int vetor_c[220];
    int vetor_p[180];
    int quantidade = 180;

    int contador1 = 0;
    do {
        printf("Digite: ");
        scanf("%d", &vetor_c[contador1]);

        contador1++;
    } while (vetor_c[contador1 - 1] != 9999);

    int contador3 = 0;
    do {
        printf("Digite: ");
        scanf("%d", &vetor_p[contador3]);

        contador3++;
    } while (vetor_c[contador3 - 1] != 9999);

    int contador = 0;
    while (vetor_c[contador] != 9999) {

        for (int contador2 = 0; contador2 < quantidade; contador2++) {

            if (vetor_c[contador] == vetor_p[contador2]) {
                printf("%d ", vetor_c[contador]);
            }
        }

        contador++;
    }

    return 0;
}
