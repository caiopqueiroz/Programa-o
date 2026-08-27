# include <stdio.h>

int main() {
    int quantidade = 5;
    int quantidade_par = 0;
    int quantidade_impar = 0;
    int numero;

    for (int contador = 0; contador < quantidade; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            quantidade_par += 1;
        } else {
            quantidade_impar += 1;
        }
    }

    printf("%d %d", quantidade_par, quantidade_impar);
    return 0;
}
