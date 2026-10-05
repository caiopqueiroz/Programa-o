# include <stdio.h>

int main() {

    int quantidade = 10;
    int numeros[quantidade];

    int auxiliar = -1;
    int contagem = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        if (contador == 0) {

            printf("Digite um numero inteiro: ");
            scanf("%d", &numeros[contador]);
        } else {

            while (numeros[contador] != auxiliar) {
                printf("Digite um numero inteiro: ");
                scanf("%d", &auxiliar);

                for (int contador2 = 0; contador2 < contador; contador2++) {

                    if (auxiliar != numeros[contador2]) {

                        contagem++;
                    }
                    if (contagem == contador) {

                        numeros[contador] = auxiliar;
                    }
                }

                if (contagem != contador) {

                    printf("Voce nao pode digitar numeros iguais\n");
                }

                contagem = 0;
            }
        }
    }

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros[contador]);
    }

    return 0;
}
