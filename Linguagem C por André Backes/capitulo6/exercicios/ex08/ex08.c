# include <stdio.h>

int main() {
    // quantidade de negativos
    // soma de positivos
    int quantidade = 10;
    float valores[quantidade];

    float soma = 0;
    int quantidade_negativos = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um valor real: ");
        scanf("%f", &valores[contador]);

        if (valores[contador] >= 0) {
            soma += valores[contador];
        } else {
            quantidade_negativos++;
        }
    }

    printf("%.2f\n%d", soma, quantidade_negativos);
}
