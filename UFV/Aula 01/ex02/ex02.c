// Declare 2 números e mostre a subtração do primeiro pelo segundo


# include <stdio.h>

int main(){
    int numero1, numero2;
    printf("Escreva 2 numeros para realizar uma subtracao:\n");
    scanf("%d %d", &numero1, &numero2);
    int subtracao = numero1 - numero2;
    printf("Resultado da subtracao: %d", subtracao);
    return 0;
}
