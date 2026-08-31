# include <stdio.h>

int main() {
    int numero = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int contador = 1;
    while (contador <= numero) {
        printf("%d x %d = %d\n", contador, numero, (contador * numero));

        contador++;
    }

    return 0;
}
