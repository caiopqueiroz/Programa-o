// ler número digitados pelo usuário e somar - o programa vai exibir a soma final e encerrar quando o usuário digitar um número negativo
# include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Insira um valor negativo para encerrar\n\n");

    do {
        printf("Digite um numero para adicionar a soma: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);

    printf("%d", soma);

    return 0;
}
