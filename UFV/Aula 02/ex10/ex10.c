# include <stdio.h>

int main(){
    float salario;
    printf("Digite o valor do seu salario: R$");
    scanf("%f", &salario);
    if (salario < 500) {
        salario *= 1.15;
        printf("\nParabens! Seu novo salario sera R$%f", salario);
    } else {
        printf("\nInfelizmente voce nao tem direito ao aumento");
    }
    return 0;
}
