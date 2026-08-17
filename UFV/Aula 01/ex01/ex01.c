// Receber 4 números inteiros e exibir a soma


# include <stdio.h>

int main(){
    int numero1, numero2, numero3, numero4;
    printf("Digite 4 números inteiros:\n");
    scanf("%d,%d,%d,%d", numero1, numero2, numero3, numero4);
    int soma = numero1 + numero2 + numero3 + numero4;
    printf("\n%d", soma);
    return 0;
}
