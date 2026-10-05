 # include <stdio.h>

 // programa: ler 10 numeros inteiros (quaisquer) e contar quantas vezes cada um aparece

 int main() {

    int quantidade = 10;
    int numeros[quantidade];

    for (int contador = 0; contador < quantidade; contador++) {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[contador]);
    }

    // criando um vetor para armazenar os números já verificados
    int numeros_verificados[quantidade];
    int aparicoes[quantidade];
    int indice = 0;

    int aparecimentos = 0;

    int permissao = 1;

    for (int contador = 0; contador < quantidade; contador++) {

        // cada um dos números deve ser comparado a todos os outros
        for (int contador2 = 0; contador2 < quantidade; contador2++) {

            for (int contador3 = 0; contador3 < indice; contador3++) {

                if (numeros_verificados[contador3] == numeros[contador]) {
                    permissao = 0;
                }
            }


            if (permissao == 1) {
                if (numeros[contador2] == numeros[contador]) {

                    aparecimentos++;
                }
            }
        }

        if (aparecimentos > 1) {

            numeros_verificados[indice] = numeros[contador];
            aparicoes[indice] = aparecimentos;
            indice++;
        }

        aparecimentos = 0;
        permissao = 1;
    }

    for (int contador = 0; contador < indice; contador++) {

        printf("O numero %d apareceu %d vezes\n", numeros_verificados[contador], aparicoes[contador]);
    }

    printf("O resto dos numeros apareceram uma vez cada");

    return 0;
 }
