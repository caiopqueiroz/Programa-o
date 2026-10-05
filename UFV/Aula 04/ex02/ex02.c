# include <stdio.h>

int main() {
    int quantidade = 6;
    int numeros[quantidade];
    int quantidade_positiva = 0;
    int quantidade_negativa = 0;

    for (int contador = 0; contador < quantidade; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (numeros[contador] >= 0) {
            quantidade_positiva += 1;
        }  else {
            quantidade_negativa += 1;
        }
    }

    printf("%d %d", quantidade_positiva, quantidade_negativa);

    return 0;
}
