# include <stdio.h>

int main() {
    int valor = 780000;
    int valor_ganhador_1 = 0.46 * valor;
    int valor_ganhador_2 = 0.32 * valor;
    int valor_ganhador_3 = valor - valor_ganhador_2 - valor_ganhador_1;
    printf("%d %d %d", valor_ganhador_1, valor_ganhador_2, valor_ganhador_3);

    return 0;
}
