# include <stdio.h>

int main() {
    int numero = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int contador = 1; contador <= numero; contador++) {
        printf("%d x %d = %d\n", contador, numero, (contador * numero));
    }

    return 0;
}
