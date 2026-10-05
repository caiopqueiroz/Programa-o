# include <stdio.h>

int main() {
    int quantidade = 8;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    int x;
    int y;
    do {
        printf("Digite dois numeros inteiros entre 0 e 7 separados por espaco: ");
        scanf("%d %d", &x, &y);
    } while (((x < 0) || (x > 7)) || ((y < 0) || (y > 7)));

    int soma = numeros[x] + numeros[y];
    printf("%d", soma);

    return 0;
}
