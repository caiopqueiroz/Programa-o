# include <stdio.h>

int main() {
    // calcular o faturamento mensal do armazém

    // tabela: número da mercadoria - quantidade vendida no mês - preço de venda

    // faturamento mensal = somatório de (quantidade vendida * preço de venda)

    // vetor de número da mercadoria
    int quantidade = 10;
    int numeros_mercadorias[quantidade];

    for (int contador = 0; contador < quantidade;   contador++) {

        numeros_mercadorias[contador] = contador + 1;

        printf("%d ", numeros_mercadorias[contador]);
    }

    // vetor de quantidade vendida
    int quantidades_vendida[10] = {10, 5, 15, 7, 22, 30, 12, 5, 8, 42};

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        printf("%d ", quantidades_vendida[contador]);
    }

    // vetor de preço de venda
    float preco_venda[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    printf("\n");
    for (int contador = 0; contador < quantidade;  contador++) {

        printf("%.2f ", preco_venda[contador]);
    }

    // vetor de faturamento por mercadoria
    float faturamento_mercadoria[10];
    float faturamento_total = 0;

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {

        faturamento_mercadoria[contador] = quantidades_vendida[contador] * preco_venda[contador];

        faturamento_total += faturamento_mercadoria[contador];

        printf("%.2f ", faturamento_mercadoria[contador]);
    }

    printf("\n");
    printf("%.2f", faturamento_total);

    return 0;
}


