# include <stdio.h>
# include <math.h>

int main() {
    int a, b, c;
    printf("Digite os coeficientes a, b, c de uma equacao de segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0) {

        // calculando delta
        int delta = pow(b, 2) - (4 * a * c);

        if (delta > 0) {
            float raiz1 = (-b + sqrt(delta)) / (2 * a);
            float raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Existem duas raizes reais: %.2f  %.2f", raiz1, raiz2);

        } else if (delta == 0) {
            float raiz = (-b + sqrt(delta)) / (2 * a);
            printf("Raiz unica: %.2f", raiz);
        } else {
            printf("Nao existe raiz");
        }

    } else {
        printf("Nao e equacao do segundo grau");
    }

    return 0;
}
