# include <stdio.h>

int main() {

    // Declarando uma variável
    int numero = 10;

    // Declarando um ponteiro do tipo int
    int *ponteiro;

    // Fazendo o ponteiro apontar para a variável - ou seja, ele vai apontar para o espaço na memória onde a variável está armazenada
    ponteiro = &numero;

    // Para usar a o ponteiro como forma de referência ao valor na memória que ele aponta: usamos o operador *
    // Exemplo: *ponteiro
    printf("O valor que o ponteiro aponta: %d", *ponteiro);

    // Alterando o valor da variável numero pelo seu ponteiro
    *ponteiro = 9;

    printf("\nExibindo o valor pelo ponteiro: %d", *ponteiro);
    printf("\nExibindo o valor pela variavel: %d", numero);

    // Resumo:

    // Declarando um ponteiro e uma variável
    int *novo_ponteiro;
    int valor = 1;

    // Associando o ponteiro à variável
    novo_ponteiro = &valor;

    // Acessando o valor através do ponteiro
    *novo_ponteiro = 2;

    // Usando o ponteiro para definir outra variável
    int valor2 = *novo_ponteiro;

    // Exibindo na tela
    printf("\nValor: %d\nValor 2: %d", *novo_ponteiro, valor2);

    return 0;
}
