# include <stdio.h>

int main() {
    // calculadora com as quatro operações básicas
    int operacao;
    printf("Digite a operacao que deseja realizar:\n1 ) Soma\n2 ) Subtracao\n3 ) Multiplicacao\n4 ) Divisao\n");
    scanf("%d", &operacao);

    float valor1, valor2;
    printf("\nDigite dois valores reais separados por espaco: ");
    scanf("%f %f", &valor1, &valor2);

    float resultado;
    switch(operacao) {
        case 1:
            resultado = valor1 + valor2;
            break;
        case 2:
            resultado = valor1 - valor2;
            break;
        case 3:
            resultado = valor1 * valor2;
            break;
        case 4:
            resultado = valor1 / valor2;
            break;
    }

    printf("%.2f", resultado);

    return 0;
}
