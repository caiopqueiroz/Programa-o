# include <stdio.h>

int main() {
    int n = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int numero_exibido = 1;
    for (int contador = 1; contador <= n; contador++) {

        for (int contador2 = 1; contador2 <= contador; contador2++) {

            printf("%d ", numero_exibido);

            numero_exibido++;
        }

        printf("\n");
    }

    return 0;
}
