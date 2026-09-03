// jogo simples de adivinhação: o programa guardará um valor fixo - o usuário deverá tentar adivinhar qual é esse valor - o programa deverá informar a cada tentativa se o usuário chutou acima ou abaixo
# include <stdio.h>

int main() {
    int numero = 42;
    int tentativa = 0;

    while (tentativa != numero) {
        printf("Pensei em um numero. Tente adivinhar qual e: ");
        scanf("%d", &tentativa);

        if (tentativa > numero) {
            printf("Tente um numero menor\n");
        } else if (tentativa < numero) {
            printf("Tente um numero maior\n");
        }
    }

    printf("Voce acertou. Parabens!");

    return 0;
}
