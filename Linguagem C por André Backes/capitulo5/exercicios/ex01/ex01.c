# include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    for (int contador = 0; contador <= numero; contador++) {

        printf("%d\n", contador);
    }

    return 0;
}
