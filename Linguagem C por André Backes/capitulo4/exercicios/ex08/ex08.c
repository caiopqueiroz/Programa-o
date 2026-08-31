# include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("Senior");
    } else if (idade >= 14) {
        printf("Juvenil B");
    } else if (idade >= 11) {
        printf("Juvenil A");
    } else if (idade >= 8) {
        printf("Infantil B");
    } else if (idade >= 5) {
        printf("Infantil A");
    } else {
        printf("Sem categoria");
    }

    return 0;
}
