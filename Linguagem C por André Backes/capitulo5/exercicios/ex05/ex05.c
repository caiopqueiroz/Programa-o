# include <stdio.h>

int main() {
    int soma = 0;
    int total = 0;
    int contador = 0;

    while (total <= 50) {
        if (contador % 2 == 0) {
            soma += contador;
            total++;
        }

        contador++;
    }

    printf("%d", soma);
}
