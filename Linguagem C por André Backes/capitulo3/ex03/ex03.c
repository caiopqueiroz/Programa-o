# include <stdio.h>

int main() {
    int numero1, numero2, numero3;
    printf("Digite tres valores inteiro separados por espaco: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    printf("%d", (numero1 + numero2 + numero3));
    return 0;
}
