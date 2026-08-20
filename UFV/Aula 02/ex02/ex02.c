# include <stdio.h>

int main(){
    float numero1, numero2, numero3;
    printf("Digite um primeiro numero real: ");
    scanf("%f", &numero1);
    printf("\nAgora digite outros dois numeros reais: ");
    scanf("%f %f", &numero2, &numero3);
    if (numero1 > (numero2 + numero3)){
        printf("\nO primeiro numero e maior que a soma dos demais");
    } else if (numero1 == (numero2 + numero3)){
        printf("\nO primeiro numero e igual a soma dos outros");
    } else {
        printf("\nA soma %f + %f e maior que o primeiro numero", numero2, numero3);
    }
    return 0;
}
