# include <stdio.h>

int main() {
    // ler um valor inteiro e positivo
    int numero = -1;

    while (numero < 0) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }

    float resultado = 0;
    // resultado = 1/1 + 1/2 + 1/3 + ... + 1/n
    for (int contador = 1; contador <= numero; contador++) {
        resultado += 1.0 / (float) contador;
    }

    printf("%.2f", resultado);
    return 0;
}
