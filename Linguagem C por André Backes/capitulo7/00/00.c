# include <stdio.h>

int main() {

    // Criando um array de caractetes de duas formas
    char nome[5] = "Caio";
    char Nome[5] = {'C', 'a', 'i', 'o', '\0'};

    // Alterando uma letra do nome usando o seu índice
    nome[2] = 'c';

    // Criando uma string vazia para que o valor de outra seja copiado para ela
    char nome2[5];

    // Exibindo o nome na tela
    for (int contador = 0; contador < 5; contador++) {

        printf("%c", Nome[contador]);

        // Atribuindo os elementos de Nome para nome2
        nome2[contador] = Nome[contador];
    }

    for (int contador = 0; contador < 5; contador++) {

        printf("%c", nome2[contador]);
    }

    return 0;
}
