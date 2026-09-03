# include <stdio.h>

int main() {
    float valor;
    float maior, menor;

    for (int contador = 0; contador < 10; contador++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (contador == 0) {
            maior = valor;
            menor = valor;
        } else {

            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    printf("%.2f %.2f", maior, menor);

    return 0;
}
