# include <stdio.h>

int main() {
    float valor1, valor2, valor3, valor4;
    printf("Digite quatro valores reais separados por espaco: ");
    scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);
    printf("%f", ((valor1 + valor2 + valor3 +valor4) / 4));
    return 0;
}
