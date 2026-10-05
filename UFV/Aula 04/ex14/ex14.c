# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros1[quantidade];
    int numeros2[quantidade];
    int contador_adicional = quantidade - 1;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um valor inteiro para o primeiro vetor: ");
        scanf("%d", &numeros1[contador]);

        numeros2[contador_adicional] = numeros1[contador];
        contador_adicional--;
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros1[contador]);
    }

    printf("\n");

    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", numeros2[contador]);
    }

    return 0;
}
