# include <stdio.h>

int main() {

    int a;
    int *b;
    int **c;
    int ***d;

    b = &a;

    c = &b;

    d = &c;

    printf("Digite um numero inteiro para a: ");
    scanf("%d", &a);

    printf("Dobro de a: %d", (*b * 2));

    printf("\nTriplo de a: %d", (**c * 3));

    printf("\nQuadruplo de a: %d", (***d * 4));

    return 0;
}
