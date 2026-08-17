# include <stdio.h>
# include <stdlib.h>

// Declarando uma variável do tipo int
int x;

// Declarando múltiplas variáveis do tipo int
int x, y, z;

// Iniciando o programa com a função main()
int main(){
    // Exibindo a variável x, que até então está vazia
    printf("x = %d\n", x);
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
char palavra = "Programacao";
// Este tipo pode conter palavras ou números pequenos
// Importante: ao escrever 1 caractere é necessário aspas simples ''
// Para escrever palavras: ""

// Declarando variáveis com números reai, tipos float e double
float numero1 = 5.25;
double numero2 = 15.673;
double numero3 = 5.0e20;

// Criando variáveis com modificadores de tipo
unsigned char x = 255;
unsigned int y = 198;
short int i = 10;
long double d = 3e4078;
unsigned long int m = 2e21;


