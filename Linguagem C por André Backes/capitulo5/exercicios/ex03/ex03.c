# include <stdio.h>

int main() {
    int numero = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int contador = 0; contador <= numero; contador++) {

        if (contador % 2 != 0) {
            printf("%d\n", contador);
        }
    }

    return 0;
}
