# include <stdio.h>

int main() {
    int positivo_3digitos;
    int valor_centena = 0;
    int valor_dezena = 0;
    int valor_unidade = 0;
    printf("Digite um numero inteiro positivo com 3 digitos: ");
    scanf("%d", &positivo_3digitos);

    while ((positivo_3digitos < 100) || (positivo_3digitos > 999)) {
        printf("Digite um numero inteiro positivo com 3 digitos: ");
        scanf("%d", &positivo_3digitos);
    }

    for (int contador = 200; contador < 1001 ; contador += 100) {
        if (positivo_3digitos < contador) {
            valor_centena = (contador - 100) / 100;
            positivo_3digitos -= contador - 100;
        }

        if (valor_centena != 0) {
            break;
        }
    }

    for (int contador = 20; contador < 101; contador += 10) {
        if (positivo_3digitos < contador) {
            valor_dezena =  (contador - 10) / 10;
            positivo_3digitos -= contador - 10;
        }

        if (valor_dezena != 0) {
            break;
        }
    }

    valor_unidade = positivo_3digitos;

    printf("%d%d%d", valor_unidade, valor_dezena, valor_centena);

    return 0;
}
