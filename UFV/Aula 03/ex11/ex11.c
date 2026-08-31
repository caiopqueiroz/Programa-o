# include <stdio.h>

int main() {
    int numero = 0;

    while (numero <= 0) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }

    // e = 1/1 +  1/2 + 1/3 + ... + 1/n
    int contador = 1;
    float e = 0;
    while (contador <= numero) {
        e += 1.0 / contador;

        contador++;
    }

    printf("%.2f", e);

    return 0;
}
