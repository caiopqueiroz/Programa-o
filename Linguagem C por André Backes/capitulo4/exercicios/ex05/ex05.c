# include <stdio.h>
# include <math.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%.2f\n", (pow(numero, 2)));
        printf("%.2f", (sqrt((float) numero)));
    }

    return 0;
}
