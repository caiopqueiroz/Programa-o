// receber um inteiro n e exibir uma pirâmide numérica até a linha n
# include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("Digite um numero inteiro diferente de 0: ");
        scanf("%d", &numero);
    } while (numero == 0);

    if (numero > 0) {
        for (int contador = 0; contador <= numero; contador++) {

            for (int contador2 = 0; contador2 < contador; contador2++) {
                printf("%d ", contador);
            }

            printf("\n");
        }
    } else if (numero < 0) {
        for (int contador = numero; contador <= 0; contador++) {
            printf("\n");

            for (int contador2 = 0; contador2 > contador; contador2--) {
                printf("%d ", contador);
            }
        }
    }

    return 0;
}
