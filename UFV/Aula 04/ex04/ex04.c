# include <stdio.h>

int main() {
    int quantidade = 15;
    int numeros[quantidade];
    int maior = 0;
    int menor = 0;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        if (contador == 0) {
            maior = numeros[contador];
            menor = numeros[contador];
        } else {
            if (numeros[contador] > maior) {
                maior = numeros[contador];
                posicao_maior = contador;
            }

            if (numeros[contador] < menor) {
                menor = numeros[contador];
                posicao_menor = contador;
            }
        }
    }

    printf("%d na posicao %d\n", maior, posicao_maior);
    printf("%d na posicao %d", menor, posicao_menor);

    return 0;
}
