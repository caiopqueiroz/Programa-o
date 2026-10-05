# include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    float vetor_a[n];
    float vetor_b[n];

    printf("\n");
    for (int contador = 0; contador < n; contador++) {

        printf("Digite dois valores reais - um para o vetor A e outro para o vetor B: ");
        scanf("%f %f", &vetor_a[contador], &vetor_b[contador]);

    }

    float vetor_c[n];
    float vetor_d[n];
    // o vetor C deve conter, em cada posição o maior elemento dessa posição dentre os elementos do vetor A e B
    // o vetor D deve conter a média correspondente entre A e B

    for (int contador = 0; contador < n; contador++) {

        if (vetor_a[contador] >= vetor_b[contador]) {
            vetor_c[contador] = vetor_a[contador];
        } else {
            vetor_c[contador] = vetor_b[contador];
        }

        vetor_d[contador] = (vetor_a[contador] + vetor_b[contador]) / 2.0;
    }

    printf("\n");
    for (int contador = 0; contador < n; contador++) {
        printf("%.2f ", vetor_c[contador]);
    }

    printf("\n");
    for (int contador = 0; contador < n; contador++) {
        printf("%.2f ", vetor_d[contador]);
    }

    return 0;
}
