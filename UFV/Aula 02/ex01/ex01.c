# include <stdio.h>

int main(){
    float salario, salario_minimo;
    printf("Digite o seu salario: R$");
    scanf("%f", &salario);
    printf("Digite agora qual e o salario minimo: R$");
    scanf("%f", &salario_minimo);
    float resultado = salario / salario_minimo;
    printf("\nParabens! Voce recebe um total de %f salarios minimos", resultado);
    return 0;
}
