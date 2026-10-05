# include <stdio.h>

int main() {
    int quantidade = 100;
    int numeros[quantidade];

    int auxiliar = 1;

    int limite = 1;

    for (int contador = 0; contador < quantidade; contador++) {

        if (auxiliar % 7 != 0) {
            numeros[contador] = auxiliar;

            printf("%d ", numeros[contador]);

            limite++;
            if (limite > 10) {
                printf("\n");

                limite = 1;
            }
        }

        auxiliar += 1;
    }

    return 0;
}
