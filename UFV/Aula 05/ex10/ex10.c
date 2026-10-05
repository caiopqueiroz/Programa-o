# include <stdio.h>

int main() {
    // 5 funcionárias
    // 3 serviços
    // Matriz 5 x 3 -> cada linha representa uma funcionária e cada coluna vai representar um serviço diferente - os valores na matriz mostram quantas vezes cada o serviço X foi executado pela pessoa Y
    // Cada funcionária recebe 1/2 do que faturou

    // Algoritmo: calcular e mostrar quanto cada uma vai receber
    // Valores dos serviços: 10 / 15 / 30

    int funcionarias = 5;
    int servicos = 3;
    int matriz[funcionarias][servicos];

    for (int linha = 0; linha < funcionarias; linha++) {

        for (int coluna = 0; coluna < servicos; coluna++) {

            printf("Total de vezes do servico %d feito pela funcionaria %d: ", coluna + 1, linha + 1);
            scanf("%d", &matriz[linha][coluna]);
        }

        printf("\n");
    }

    float valor_corte = 0;
    float valor_depilacao = 0;
    float valor_podologia = 0;
    float salario = 0;
    for (int linha = 0; linha < funcionarias; linha++) {

        for (int coluna = 0; coluna < servicos; coluna++) {

            if (coluna == 0) {
                valor_corte = (matriz[linha][coluna] * 10) / 2.0;
            } else if (coluna == 1) {
                valor_depilacao = (matriz[linha][coluna] * 15) / 2.0;
            } else {
                valor_podologia = (matriz[linha][coluna] * 30) / 2.0;
            }
        }

        salario = valor_corte + valor_depilacao + valor_podologia;

        printf("%.2f\n", salario);
    }
    return 0;
}
