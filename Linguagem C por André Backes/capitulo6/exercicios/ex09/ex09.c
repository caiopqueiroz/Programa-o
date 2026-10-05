# include <stdio.h>

int main() {
    int quantidade = 10;
    int a[quantidade];
    int b[quantidade];

    int c[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite 2 numeros inteiros separados por espaco: ");
        scanf("%d %d", &a[contador], &b[contador]);

        // c = a - b
        c[contador] = a[contador] - b[contador];
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", c[contador]);
    }

    return 0;
}
