# include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite o dia atual da forma dd/mm/aa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("%d/%d/%d", dia, mes, ano);

    return 0;
}
