# include <stdio.h>

int main() {
    // hn = 1 + 1/2 + 1/3 + ... 1/n
    int n;
    float hn = 0.0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int contador = 0; contador < n; contador++) {

        hn += 1.0 / ((float) contador + 1.0);
    }

    printf("%.2f", hn);

    return 0;
}
