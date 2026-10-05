# include <stdio.h>
# include <math.h>

int main() {
    int quantidade = 20;
    float valores[quantidade];
    float quadrados[quantidade];

    float auxiliar = 0;

    printf("-1 para encerrar\n\n");

    for (int contador = 0; contador < quantidade;  contador++) {

        printf("Digite um valor real: ");
        scanf("%f", &auxiliar);

        if (auxiliar != -1) {

            valores[contador] = auxiliar;
            quadrados[contador] = pow(valores[contador], 2);
        } else {

            quantidade = contador;
            break;
        }
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%.2f ", valores[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%.2f ", quadrados[contador]);
    }

    return 0;
}
