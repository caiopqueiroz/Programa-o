// Receber o raio de um círculo, calcular sua área e exibir na tela

# include <stdio.h>

int main(){
    int raio;
    printf("Digite um numero inteiro para o raio do circulo:\n");
    scanf("%d", &raio);
    // Área = pi*r**2
    float area_circulo = 3.14 * (raio**2);
    printf("Area do circulo: %f", area_circulo);
    return 0;
}
