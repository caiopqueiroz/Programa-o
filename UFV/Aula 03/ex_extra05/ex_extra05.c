// receber dois inteiros positivos - calcular a**b usando laços de repetição
# include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int potencia = 1;

    do {
        printf("Digite dois numeros inteiros separados por espaco: ");
        scanf("%d %d", &a, &b);
    } while ((a <= 0) || (b <= 0));

    // exemplo: a = 2 / b = 3 / a * a * a
    for (int contador = 0; contador < b; contador++) {
        potencia *= a;
    }

    printf("%d^%d = %d", a, b, potencia);

    return 0;
}
