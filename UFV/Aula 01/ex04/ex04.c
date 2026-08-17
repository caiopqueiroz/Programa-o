// Receber um salário, aumentá-lo em 25% e exibir na tela o salário ajustado


# include <stdio.h>

int main(){
    float salario;
    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);
    float novo_salario = salario * 1.25;
    printf("Novo salario: R$%f", novo_salario);
    return 0;
}
