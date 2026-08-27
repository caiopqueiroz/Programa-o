# include <stdio.h>

int main() {
    int positivo_3digitos;
    int valor_centena = 0;
    printf("Digite um numero inteiro positivo com 3 digitos: ");
    scanf("%d", &positivo_3digitos);

    while ((positivo_3digitos < 100) || (positivo_3digitos > 999)) {
        printf("Digite um numero inteiro positivo com 3 digitos: ");
        scanf("%d", &positivo_3digitos);
    }

    for (int contador = 200; contador < 1001 ;contador += 100) {
        if (positivo_3digitos < contador) {
            valor_centena = (contador - 100) / 100;
            positivo_3digitos -= contador - 100;
        }

        if (valor_centena != 0) {
            break;
        }
    }

    printf("%d %d", valor_centena, positivo_3digitos);

    return 0;
}
