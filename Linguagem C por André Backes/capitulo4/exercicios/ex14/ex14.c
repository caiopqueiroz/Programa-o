# include <stdio.h>

int main() {
    // verificar se o número de entrada é divisível por 3 ou 5 - mas nunca por ambos
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0) && (numero % 5 == 0)) {
        printf("E divisivel simultaneamente por 3 e 5");
    } else {

        if (numero % 3 == 0) {
            printf("Divisivel apenas por 3");
        } else if (numero % 5 == 0) {
            printf("Divisivel apenas por 5");
        } else {
            printf("Nao e divisivel por 3 ou por 5");
        }
    }

    return 0;
}
