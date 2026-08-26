# include <stdio.h>
# include <math.h>

int main() {
    int quantidade = 400;
    float valor;

    for (int contador = 0; contador < quantidade; contador++) {
        printf("Digite um valor real: ");
        scanf("%f", &valor);
        printf("%.2f\n", (pow(valor, 3)));
    }
    return 0;
}
