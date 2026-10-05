# include <stdio.h>

int main() {
    int numero = 0;
    int proximo_numero = 0;
    int primeiro_anterior = 1;
    int segundo_anterior = 0;

    do {
        printf("Digite um numero inteiro maior ou igual a zero: ");
        scanf("%d", &numero);
    } while (numero < 0);

    for (int contador = 0; contador < numero; contador++) {

        if (contador == 0) {
            printf("0\n");
        } else if (contador == 1) {
            printf("1\n");
        } else {

            proximo_numero = segundo_anterior + primeiro_anterior;

            printf("%d\n", proximo_numero);

            // ajustando os anteriores
            segundo_anterior = primeiro_anterior;
            primeiro_anterior = proximo_numero;
        }
    }

    return 0;
}
