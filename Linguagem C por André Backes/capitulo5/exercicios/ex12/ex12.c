# include <stdio.h>

int main() {
    int numero = 0;
    int soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        for (int contador = 1; contador < numero; contador++) {

            if (numero % contador == 0) {

                soma += contador;
            }
        }
    } else {
        for (int contador = numero + 1; contador < 0; contador++) {

            if (numero % contador == 0) {

                soma += contador;
            }
        }
    }

    printf("%d", soma);
}
