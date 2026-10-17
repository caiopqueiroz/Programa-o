# include <stdio.h>
# include <string.h>

int main() {

    char nome[15];

    // Lendo uma string com a função scanf usando %s
    //printf("Digite seu primeiro nome: ");
    //scanf("%s", nome);

    // Exibindo a string lida na tela
    //printf("%s", nome);

    // Lendo e uma string com a função fgets e exibindo - nessa função, são necessários os parâmetros tamanho do array e stdin
    char palavra[20];

    printf("\nDigite uma palavra: ");
    fgets (palavra, 20, stdin);

    printf("%s", palavra);

    return 0;
}
