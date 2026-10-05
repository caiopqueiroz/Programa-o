# include <stdio.h>

int main() {
    int quantidade = 10;
    int numeros1[quantidade];
    int numeros2[quantidade];
    int vetor_resultante[quantidade * 2];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite dois numeros inteiros - um para o primeiro vetor e outro para o segundo: ");
        scanf("%d %d", &numeros1[contador], &numeros2[contador]);
    }

    int contador_auxiliar1 = 0;
    int contador_auxiliar2 = 0;
    for (int contador = 0; contador < (quantidade * 2); contador++) {

        if (contador % 2 == 0) {
            vetor_resultante[contador] = numeros1[contador_auxiliar1];
            contador_auxiliar1++;
        } else {
            vetor_resultante[contador] = numeros2[contador_auxiliar2];
            contador_auxiliar2++;
        }
    }

    for (int contador = 0; contador < (quantidade * 2); contador++) {
        printf("%d ", vetor_resultante[contador]);
    }

    return 0;
}
