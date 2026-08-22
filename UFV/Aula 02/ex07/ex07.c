// Receber dois números e verificar se o primeiro é divisível pelo segundo

# include <stdio.h>

int main(){
    int numerador, denominador;
    printf("Digite uma divisao (p/q): ");
    scanf("%d/%d", &numerador, &denominador);
    if (denominador != 0) {
        if (numerador % denominador == 0) {
            printf("\nDivisivel");
        } else {
            printf("\nNao e divisivel");
        }
    } else {
        printf("\nImpossivel dividir por 0");
    }
    return 0;
}
