# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    int ocorrencias = 0;

    int numeros_vistos[quantidade];
    int indice = 0;

    int permissao = 1;

    for (int contador = 0; contador < quantidade; contador++) {

        for (int contador2 = 0; contador2 < quantidade; contador2++) {

            if (numeros[contador2] == numeros[contador]) {

                ocorrencias++;
            }
        }

        if (ocorrencias > 1) {

            for (int contador3 = 0; contador3 < indice; contador3++) {

                if (numeros_vistos[contador3] == numeros[contador]) {
                    permissao = 0;
                }
            }

            if (permissao == 1) {

                printf("O numero %d apareceu %d vezes\n", numeros[contador], ocorrencias);

                numeros_vistos[indice] = numeros[contador];
                indice++;
            }
        }

        permissao = 1;
        ocorrencias = 0;
    }

    return 0;
}
