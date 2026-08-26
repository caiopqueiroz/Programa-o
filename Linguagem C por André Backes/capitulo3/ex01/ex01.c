# include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\nSucessor: %d", (numero - 1),(numero + 1));
    return 0;
}
