# include <stdio.h>

int main() {
    int numero;
    int maior = 0;
    int menor = 0;

    int contador = 0;
    do {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (contador == 0) {

            if (numero >= 0) {
                maior = numero;
                menor = numero;
            }
        } else {
            if (numero >= 0) {
                if (numero > maior) {
                    maior = numero;
                }
                if (numero < menor) {
                    menor = numero;
                }
            }
        }

        contador++;
    } while (numero >= 0);

    printf("%d %d", maior, menor);

    return 0;
}
