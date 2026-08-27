# include <stdio.h>

int main() {
    float angulo_graus;
    printf("Digite um angulo em graus: ");
    scanf("%f", &angulo_graus);

    //  radianos = graus * pi / 180
    float pi = 3.141592;
    float angulo_radianos = angulo_graus * pi / 180;
    printf("%.2f rad",  angulo_radianos);

    return 0;
}
