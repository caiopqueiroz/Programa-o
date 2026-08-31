# include <stdio.h>

int main() {
    // testando se uma variável sozinha pode ser usada em um comando if como condição
    int numero = 0;
    numero = 2;

    if (numero) {
        printf("Teste");
    } else {
        printf("Caiu no else");
    }

    // conclusão: pode sim!
    return 0;
}
