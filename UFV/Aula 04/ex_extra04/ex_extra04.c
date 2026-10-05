# include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int x[n];

    int menor = 0;
    int posicao_menor = 0;

    for (int contador = 0; contador < n; contador++) {

        scanf("%d", &x[contador]);

        if (contador == 0) {

            menor = x[contador];
            posicao_menor = contador;
        } else {

            if (x[contador] < menor) {

                menor = x[contador];
                posicao_menor = contador;
            }
        }
    }

    printf("Menor valor: %d\nPosicao: %d", menor, posicao_menor);

    return 0;
}
