# include <stdio.h>
# include <stdlib.h>

int main() {

    int numero1;
    int numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro: ");
    scanf("%d", &numero2);

    int *ponteiro1;
    int *ponteiro2;

    ponteiro1 = &numero1;
    ponteiro2 = &numero2;

    if (ponteiro1 > ponteiro2) {

        printf("A variavel %d esta no endereco maior: %u", *ponteiro1, ponteiro1);
    } else {

        printf("A variavel %d esta no endereco maior: %u", *ponteiro2, ponteiro2);
    }

    return 0;
}
