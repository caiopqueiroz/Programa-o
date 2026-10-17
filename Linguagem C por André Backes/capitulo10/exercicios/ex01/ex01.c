# include <stdio.h>
# include <stdlib.h>

int main() {

    int inteiro1 = 5;
    int inteiro2 = 10;

    int *ponteiro1;
    int *ponteiro2;

    ponteiro1 = &inteiro1;
    ponteiro2 = &inteiro2;

    if (ponteiro1 > ponteiro2) {

        printf("A variavel %d esta no maior endereco: %u ", *ponteiro1, ponteiro1);
    } else {

        printf("A variavel %d esta no maior endereco: %u ", *ponteiro2, ponteiro2);
    }

    return 0;
}
