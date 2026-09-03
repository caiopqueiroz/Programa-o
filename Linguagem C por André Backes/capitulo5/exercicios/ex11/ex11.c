# include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    for (int contador = 1; contador <= numero; contador++) {

        if (numero % contador == 0) {
            printf("%d\n", contador);
        }
    }

    return 0;
}
