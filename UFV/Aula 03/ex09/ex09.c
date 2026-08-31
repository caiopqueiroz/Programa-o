# include <stdio.h>

int main() {
    // congruente a módulo se i % j = m % j
    int j, m;
    int total = 0;
    int contador = 1;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &j, &m);

    while (total < 10) {

        if ((contador % j) == (m % j)) {
            printf("%d\n", contador);
            total += 1;
        }

        contador++;
    }

    return 0;
}
