# include <stdio.h>

int main() {
    int quantidade;
    float valor, soma = 0;
    printf("Digite a quantidade de numeros a ser lida: ");
    scanf("%d", &quantidade);

    for (int contador = 0; contador < quantidade; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%f", &valor);
        soma += valor;
    }

    printf("%.2f", (soma / quantidade));

    return 0;
}
