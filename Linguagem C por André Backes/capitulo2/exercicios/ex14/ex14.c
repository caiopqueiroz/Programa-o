# include <stdio.h>

int main() {
    char letra1, letra2, letra3;
    printf("Digite tres letras separadas por espaco: ");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    printf("%c\n%c\n%c", letra1, letra2, letra3);
    return 0;
}
