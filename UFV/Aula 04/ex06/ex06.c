# include <stdio.h>

int main() {
    int tamanho_vetor;
    int soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    int vetor[tamanho_vetor];

    printf("\n");
    for (int contador = 0; contador < tamanho_vetor; contador++) {
        printf("Digite um elemento para o vetor: ");
        scanf("%d", &vetor[contador]);

        if (contador % 2 == 0) {
            soma += vetor[contador];
        }
    }

    printf("%d", soma);

    return 0;
}
