# include <stdio.h>

int main() {

    // Declarando uma variável e um ponteiro
    int *ponteiro;
    int numero = 1;

    ponteiro = &numero;

    printf("Valor apontado: %d", *ponteiro);

    // Somando +1 na posição do ponteiro
    ponteiro++;

    // Dessa forma, o ponteiro deixa de apontar para a variável que atribuímos, por isso não conseguimos mais acessá-la através dele
    printf("\nEspaco na memoria: %p", ponteiro);
    printf("\nValor apontado: %d", *ponteiro);

    return 0;
}
