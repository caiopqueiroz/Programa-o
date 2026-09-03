# include <stdio.h>

int main() {
    int contador = 1;
    int total = 0;

    while (total < 5) {
        if (contador % 3 == 0) {
            printf("%d\n", contador);
            total++;
        }

        contador++;
    }

    return 0;
}
