# include <stdio.h>

int main(){
    // custo consumidor = custo de fábrica + (distribuidor * custo de fábrica) + (impostos * custo de fábrica)
    float percentual_distribuidor = 0.28;
    float percentual_impostos = 0.45;
    float custo_fabrica, custo_total;
    printf("Digite o custo de fabrica do seu carro: R$");
    scanf("%f", &custo_fabrica);
    custo_total = custo_fabrica + (percentual_distribuidor * custo_fabrica) + (percentual_impostos * custo_fabrica);
    printf("\nO custo total do seu carro e R$%f\n", custo_total);
    return 0;
}
