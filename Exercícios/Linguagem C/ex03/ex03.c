# include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    int fim;

    printf("Ver a tabuada de %d ate: ", numero);
    scanf("%d", &fim);

    for (int contador = 1; contador <= fim; contador++) {

        printf("%d x %d = %d\n", numero, contador, (numero * contador));
    }

    return 0;
}
