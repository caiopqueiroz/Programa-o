# include <stdio.h>

int main() {
    int quantidade = 0;

    printf("Digite um numero inteiro para a quantidade: ");
    scanf("%d", &quantidade);

    float valores[quantidade];
    float maior = 0;
    int quantidade_maior = 0;
    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um valor real: ");
        scanf("%f", &valores[contador]);

        if (contador == 0) {
            maior = valores[contador];
        } else {
            if (valores[contador] > maior) {
                maior = valores[contador];
            } else if (valores[contador] == maior) {
                quantidade_maior++;
            }
        }
    }

    printf("%.2f foi lido %d vezes", maior, quantidade_maior);

    return 0;
}
