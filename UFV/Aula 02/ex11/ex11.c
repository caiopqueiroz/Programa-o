// Escrever em ordem crescente: L - M - N

# include <stdio.h>

int main() {
    printf("Esse programa vai exibir tres letras do alfabeto em ordem crescente: ");
    char letra1, letra2, letra3;
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    if ((letra1 > letra2) && (letra1 > letra3)) {
        if (letra2 > letra3) {
            printf("%c %c %c", letra3, letra2, letra1);
        } else {
            printf("%c %c %c", letra2, letra3, letra1);
        }
    } else if ((letra2 > letra1) && (letra2 > letra3)) {
        if (letra1 > letra3) {
            printf("%c %c %c", letra3, letra1, letra2);
        } else {
            printf("%c %c %c", letra1, letra3, letra2);
        }
    } else if ((letra3 > letra1) && (letra3 > letra2)) {
        if (letra1 > letra2) {
            printf("%c %c %c", letra2, letra1, letra3);
        } else {
            printf("%c %c %c", letra1, letra2, letra3);
        }
    }
    return 0;
}
