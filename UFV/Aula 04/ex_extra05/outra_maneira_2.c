# include <stdio.h>

int main() {

    int total = 100;
    int quantidades[100] = {0};

    int numero = 0;

    for (int contador = 0; contador < 3; contador++) {

        printf("Digite um numero inteiro entre 0 e 99: ");
        scanf("%d", &numero);

        // somando +1 à 'casa ocupada pelo numero x' - ou seja, a casa que tem índice x
        quantidades[numero]++;
    }

    for (int contador = 0; contador < total; contador++) {

        if (quantidades[contador] > 0) {
            printf("O numero %d aparece %d vezes\n", contador, quantidades[contador]);
        }
    }

    return 0;
}
