# include <stdio.h>
# include <math.h>

int main() {
    float valor;
    int quantidade = 15;
    float raizes[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um valor para o vetor: ");
        scanf("%f", &valor);

        if (valor >= 0) {
            valor = sqrt(valor);
        } else {
            valor = -1;
        }
        raizes[contador] = valor;
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%.2f ", raizes[contador]);
    }

    return 0;
}
