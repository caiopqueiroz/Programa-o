# include <stdio.h>
# include <math.h>

int main() {
    float cateto_1, cateto_2;
    printf("Digite os valores do cateto de um triangulo separados por espaco: ");
    scanf("%f %f", &cateto_1, &cateto_2);

    // hipotenusa = raiz de (cateto_1**2 + cateto_2**2)
    float hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));
    printf("%.2f", hipotenusa);

    return 0;
}
