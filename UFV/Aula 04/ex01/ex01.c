# include <stdio.h>

int main() {
    int quantidade_numeros = 10;
    int numeros[quantidade_numeros];

    for (int contador = 0; contador < quantidade_numeros; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    printf("O numero 5 aparece nas seguintes posicoes: ");
    for (int contador = 0; contador < quantidade_numeros; contador++) {
        if (numeros[contador] == 5) {
            printf("%d ", contador);
        }
    }

    return 0;
}
