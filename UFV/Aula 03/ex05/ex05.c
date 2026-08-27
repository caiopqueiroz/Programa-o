# include <stdio.h>

int main() {
    int numero = 0;
    int soma_pares = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int contador = numero; contador > 0; contador--) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma_pares += numero;
        }
    }

    printf("%d", soma_pares);
    return 0;
}
