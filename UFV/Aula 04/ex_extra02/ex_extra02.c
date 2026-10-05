# include <stdio.h>

int main() {
    int quantidade = 0;
    printf("Digite a quantidade de testes: ");
    scanf("%d", &quantidade);

    for (int contador_auxiliar = 0; contador_auxiliar < quantidade; contador_auxiliar++) {

        int numero = 0;
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        unsigned int primeiro_termo = 0;
        unsigned int segundo_termo = 1;
        unsigned int termo = 0;
        unsigned int primeiro_antecessor = 0;
        unsigned int segundo_antecessor = 0;
        unsigned int exibicao_contador = 0;

        for (int contador = 0; contador <= numero; contador++) {

            if (contador == 0) {

                termo = primeiro_termo;

                segundo_antecessor = termo;
            } else if (contador == 1) {

                termo = segundo_termo;

                primeiro_antecessor = termo;
            } else {

                termo = (primeiro_antecessor + segundo_antecessor);

                // fazendo as trocas
                segundo_antecessor = primeiro_antecessor;
                primeiro_antecessor = termo;
            }

            exibicao_contador = contador;
        }

        printf("Fib(%d) = %u\n", exibicao_contador, termo);
    }

    return 0;
}
