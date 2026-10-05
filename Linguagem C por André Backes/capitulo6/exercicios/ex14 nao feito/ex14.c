# include <stdio.h>

int main() {

    int n = 5;
    // printf("Digite um numero inteiro para n: ");
    // scanf("%d", &n);

    int numeros[n];

    int soma = 0;
    float media = 0.0;

    for (int contador = 0; contador < n; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        soma += numeros[contador];
    }

    media = (float) soma / (float) n;

    printf("%.2f", media);

    float somatorio = 0;
    for (int contador = 0; contador < n; contador++) {

        somatorio += (numeros[contador] - media);
    }

    printf("\n%.2f", somatorio);

    return 0;
}
