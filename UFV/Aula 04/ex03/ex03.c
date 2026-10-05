# include <stdio.h>

int main() {
    int quantidade = 10;
    float notas[quantidade];
    float soma;
    float media;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[contador]);

        soma += notas[contador];
    }

    media = soma / quantidade;

    printf("%.2f", media);

    return 0;
}
