// receber inteiro positivo n e calcular a soma de todos os múltiplos de 3 e 5 menores que n
# include <stdio.h>

int main() {
    int numero = 0;
    int soma = 0;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    for (int contador = 0; contador < numero; contador++) {
        if ((contador % 3 == 0) || (contador % 5 == 0)) {
            soma += contador;
        }
    }

    printf("%d", soma);

    return 0;
}
