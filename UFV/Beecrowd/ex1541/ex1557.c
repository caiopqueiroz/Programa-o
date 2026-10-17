# include <stdio.h>

int main() {

    int dimensao;
    int valores[10] = {0};
    int contador2 = 0;

    do {
        do {

            printf("Digite a dimensao da matriz: ");
            scanf("%d", &dimensao);
        } while ((dimensao < 0) || (dimensao > 15));

        valores[contador2] = dimensao;

        contador2++;
    } while (dimensao != 0);

    for (int contador = 0; contador < 10; contador++) {

        //if (valores[contador] != 0) {
        //    printf("%d ", valores[contador]);
        //}
        if (valores[contador] != 0) {

            int contador3 = 1;

            int suporte = 1;

            for (int linha = 0; linha < valores[contador]; linha++) {

                for (int coluna = 0; coluna < valores[contador]; coluna++) {

                    printf("\t%d", contador3);

                    contador3 *= 2;
                }

                suporte *= 2;
                contador3 = suporte;

                printf("\n");
            }

            printf("\n");
        }
    }

    return 0;
}
