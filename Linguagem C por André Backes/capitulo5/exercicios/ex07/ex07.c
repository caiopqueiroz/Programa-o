# include <stdio.h>

int main() {
    float valor;
    float soma = 0;

    for (int contador = 0; contador < 10; contador++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        soma += valor;
    }

    printf("%.2f", soma);

    return 0;
}
