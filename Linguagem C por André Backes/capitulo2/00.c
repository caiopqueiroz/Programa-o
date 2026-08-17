# include <stdio.h>
# include <stdlib.h>

// Declarando uma variável do tipo int
int x;

// Declarando múltiplas variáveis do tipo int
int x, y, z;

// Iniciando o programa com a função main()
int main(){
    // Exibindo a variável x, que até então está vazia
    printf("x = %d\n",  x);
    // Definindo um valor para a variável x
    x = 5;
    // Exibindo x = 5
    printf("x = %d\n", x);
    system("pause");
    return 0;
}

// Declarando variáveis do tipo char
char letra = 'a';
char numero = 10;
// Este tipo pode conter palavras ou números pequenos
// Importante: ao escrever palavras é necessário aspas simples ''
