// Receber o peso de uma pessoa em kg e exibir o valor em gramas


# include <stdio.h>

int main(){
    unsigned int peso;
    printf("Digite o peso de uma pessoa em kg:\n");
    scanf("%d", &peso);
    unsigned int peso_gramas = peso * 1000;
    printf("Peso em gramas: %d", peso_gramas, "g");
    return 0;
}
