# include <stdio.h>

int main() {
    int t;
    printf("Digite um numero inteiro: ");
    scanf("%d", &t);

    int quantidade = 10;
    int n[quantidade];

    int valores = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        if (valores == t) {
            valores = 0;
        }

        n[contador] = valores;

        valores++;
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("N[%d] = %d\n", contador, n[contador]);
    }

    return 0;
}
