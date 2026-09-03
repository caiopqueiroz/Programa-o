# include <stdio.h>

int main() {
    int numero;
    float media;
    int soma = 0;

    for (int contador = 0; contador < 10; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        soma += numero;
    }

    media = soma / 10.0;
    printf("%.2f", media);

    return 0;
}
