// Ler dois valores e troque eles de variável, depois exiba na tela

# include <stdio.h>

int main(){
    int A, B, place_holder;
    printf("Digite dois valores inteiros separados por espaco: ");
    scanf("%d %d", &A, &B);
    printf("\nNo momento: A = %d e B = %d", A, B);
    printf("\nTrocando as variaveis... Pronto!");
    place_holder = A;
    A = B;
    B = place_holder;
    printf("\n\nExibindo A: %d", A);
    printf("\nExibindo B: %d", B);

    return 0;
}
