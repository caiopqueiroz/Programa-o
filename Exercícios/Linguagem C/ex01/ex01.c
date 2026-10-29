#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero != 0) {

        //printf("O numero nao e nulo");

        if (numero > 0) {

            printf("O numero e positivo");
        } else {

            printf("O numero e negativo");
        }

        if (numero % 2 == 0) {

            printf(" e par");
        } else {

            printf(" e impar");
        }
    } else {

        printf("O numero e nulo");
    }

    return 0;
}
