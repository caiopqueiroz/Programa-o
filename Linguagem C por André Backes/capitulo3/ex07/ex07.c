# include <stdio.h>

int main() {
    float valor_reais, cotacao_dolar;
    printf("Digite um valor: R$");
    scanf("%f", &valor_reais);
    printf("Digite a cotacao do dolar: R$");
    scanf("%f", &cotacao_dolar);
    printf("R$%.2f sao $%.2f", valor_reais, (valor_reais / cotacao_dolar));
    return 0;
}
