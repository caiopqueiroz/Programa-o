# include <stdio.h>

int main() {
    int numero_positivo = 0;
    int fatorial = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero_positivo);

    // tratamento de erros
    while (numero_positivo < 0) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero_positivo);
    }

    // cálculo do fatorial
    for (int contador = numero_positivo; contador > 0;contador--) {
        fatorial *= contador;
    }

    printf("%d", fatorial);
    return 0;
}
