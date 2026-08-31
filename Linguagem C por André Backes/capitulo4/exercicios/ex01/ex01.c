# include <stdio.h>

int main() {
    int numero1, numero2;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2) {
        printf("%d e o maior", numero1);
    } else if (numero2 > numero1) {
        printf("%d e o maior", numero2);
    } else {
        printf("Os numeros sao iguais");
    }

    return 0;
}
