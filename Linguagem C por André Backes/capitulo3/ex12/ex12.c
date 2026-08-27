# include <stdio.h>
# include <math.h>

int main() {
    float altura, raio;
    printf("Digite a altura e o raio de um cilindro, nessa ordem: ");
    scanf("%f %f", &altura, &raio);

    // volume = pi * raio**2 * altura
    float pi = 3.141592;
    float volume = pi * pow(raio, 2) * altura;
    printf("%.2f", volume);

    return 0;
}
