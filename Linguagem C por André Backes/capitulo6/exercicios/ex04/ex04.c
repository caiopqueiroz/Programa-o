# include <stdio.h>

int main() {
    int a[6] = {1, 0, 5, -2, -5, 7};

    int soma = (a[0] + a[1] + a[5]);
    printf("%d", soma);

    a[4] = 100;

    printf("\n");
    for (int contador = 0; contador < 6; contador++) {

        printf("\n%d", a[contador]);
    }

    return 0;
}
