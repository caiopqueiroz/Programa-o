# include <stdio.h>

int main() {
   int numero = 0;
   int soma = 0;

   do {

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
   } while (numero <= 1);

   for (int contador = numero; contador > 0; contador--) {

    if (numero % contador == 0) {
        soma++;
    }
   }

   printf("\n");
   if (soma > 2) {
        printf("O numero nao e primo");
        printf("\n%d e o numero de divisores que tem", soma);
   } else {
        printf("O numero e primo");
   }
}
