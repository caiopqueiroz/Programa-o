# include <stdio.h>

int main() {
    int soma = 0;

    for (int contador = 1; contador < 1000; contador++) {

        if (contador % 3 == 0) {
            soma += contador;
        } else if (contador % 5 == 0) {
            soma += contador;
        }
    }

    printf("%d", soma);

    return 0;
}
