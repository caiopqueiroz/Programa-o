// Receber o salário bruto do funcionário e o valor da prestação

# include <stdio.h>

int main(){
    float salario_bruto, valor_prestacao;
    printf("Digite o salario bruto do funcionario: R$");
    scanf("%f", &salario_bruto);
    printf("Agora o valor desejado da prestacao: R$");
    scanf("%f", &valor_prestacao);
    // Calculando 30% do salario bruto
    float valor_maximo = 0.3 * salario_bruto;
    if (valor_prestacao > valor_maximo) {
        printf("\nEmprestimo negado");
    } else {
        printf("\nEmprestimo aceito");
    }

    return 0;
}
