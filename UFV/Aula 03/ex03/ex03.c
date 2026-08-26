# include <stdio.h>

int main() {
    int quantidade = 0;
    float valor, maior;
    printf("Digite a quantidade de valores a ser lida: ");
    scanf("%d", &quantidade);

    for (int contador = 0; contador < quantidade; contador++) {
        printf("Digite um valor real: ");
        scanf("%f", &valor);

        if (contador == 0) {
            maior = valor;
        } else {
            if (valor > maior) {
                maior = valor;
            }
        }
    }

    printf("\n%.2f", maior);
}
