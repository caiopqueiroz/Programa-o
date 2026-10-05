# include <stdio.h>

int main() {
    int denominador = 1;
    float soma = 0;

    for (int contador = 1; contador <= 99; contador = contador + 2) {

        soma += (float) contador / (float) denominador;

        denominador++;
        // printf("%d ", contador);
    }

    printf("%.2f", soma);

    return 0;
}
