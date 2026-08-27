# include <stdio.h>
# include <math.h>

int main() {
    float raio;
    printf("Digite o raio de um circulo: ");
    scanf("%f", &raio);

    // area = pi * raio * raio
    float pi = 3.141592;
    float area = pi * pow(raio, 2);
    printf("%.2f", area);

    return 0;
}
