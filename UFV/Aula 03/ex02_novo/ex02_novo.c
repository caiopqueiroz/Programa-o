# include <stdio.h>

int main() {
    int numero, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int contador = 0; contador <= numero; contador++) {
        soma += contador;
    }
    printf("%d", soma);

    return 0;
}
