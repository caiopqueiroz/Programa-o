// receber um inteiro positivo n - se n for par: o próximo termo será n/2 - se n for ímpar: o próximo termo será 3 * n + 1
# include  <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    while (numero > 1) {

        printf("%d -> ", numero);

        if (numero % 2 == 0) {
            numero = numero / 2;
        } else {
            numero = (3 * numero) + 1;
        }
    }

    printf("1");

    return 0;
}
