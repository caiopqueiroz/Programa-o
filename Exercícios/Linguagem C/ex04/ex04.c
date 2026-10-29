// criar um vetor com n números

# include <stdio.h>

int main() {

    int quantidade;

    printf("Digite uma quantidade de numeros para um vetor: ");
    scanf("%d", &quantidade);

    int numeros[quantidade];

    int soma = 0;

    int menor;
    int maior;

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);

        soma += numeros[contador];

        if (contador == 0) {

            maior = numeros[contador];
            menor = numeros[contador];
        } else {

            if (numeros[contador] > maior) {

                maior = numeros[contador];
            }
            if (numeros[contador] < menor) {

                menor = numeros[contador];
            }
        }
    }

    printf("\nForam digitados %d numeros", quantidade);

    if (quantidade != 0) {

        printf("\nA soma dos numeros e %d", soma);

        printf("\nA media e %.1f", (soma / (float) quantidade));

        printf("\nO maior numero e %d e o menor %d", maior, menor);
    }

    return 0;
}
