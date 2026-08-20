// Usando a função putchar() para exibir 1 caractere na tela
# include <stdio.h>
# include <stdlib.h>

int main(){
    char c = 'a';
    int x = 65;
    // Usando a função putchar() para exibir 'a' contido na variável c
    putchar(c);

    // Usando putchar() para quebrar a linha
    putchar('\n');

    // O valor inteiro 65 corresponde ao caractere 'A'
    putchar(x);
    putchar('\n');

    system("pause");
    return 0;
}
