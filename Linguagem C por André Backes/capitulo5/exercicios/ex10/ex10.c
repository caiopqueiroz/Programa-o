# include <stdio.h>

int main() {
    int numero;
    int total = 0;
    int soma;
    float media;

    while (total < 10) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            total++;
        }
    }

    media = soma / 10.0;
    printf("%.2f", media);

    return 0;
}
