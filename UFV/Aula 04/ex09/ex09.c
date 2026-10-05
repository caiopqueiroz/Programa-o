# include <stdio.h>

int main() {
    int quantidade = 5;
    int numeros1[quantidade];
    int numeros2[quantidade];
    int somas[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite dois numeros inteiros - um para o primeiro vetor e outro para o segundo: ");
        scanf("%d %d", &numeros1[contador], &numeros2[contador]);

        somas[contador] = numeros1[contador] + numeros2[contador];
    }

    printf("\n");
    for (int contador = 0; contador < quantidade; contador++) {
        printf("%d ", somas[contador]);
    }

    return 0;
}
