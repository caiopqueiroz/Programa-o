// Criando um programa que irá receber uma data e imprimir na tela
# include <stdio.h>
# include <stdlib.h>

int main(){
    int dia, mes, ano;
    printf("Digite uma data no formato (dd/mm/aa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("\nO dia digitado foi %d o mes %d e o ano %d\n", dia, mes, ano);
    system("pause");
    return 0;
}
