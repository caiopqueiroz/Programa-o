# include <stdio.h>

int main() {
    int velocidade;
    printf("Digite uma velocidade em km/h: ");
    scanf("%d", &velocidade);
    printf("Valor em m/s: %.2f", ((float) velocidade / 3.6));
    return 0;
}
