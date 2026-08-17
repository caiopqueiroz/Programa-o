// Escrevendo uma mensagem de texto simples na tela


# include <stdio.h>
# include <stdlib.h>

int main(){
    // Usando a função printf() para exibir uma variável
    // É necessário usar a forma: printf("%tipo_de_saída", nome_da_variável)
    int numero = 10;
    printf("Estou exibindo esse numero que esta guardado em uma variavel: %i\n", numero);

    // Exibindo agora 2 variáveis diferentes
    char caractere = 'C';
    printf("Agora estou exibindo essa letra: %c\nE esse numero: %d\n", caractere, numero);

    // Exibindo 3 tipos de variáveis: %i - número inteiro / %c - caractere / %s - cadeia de caracteres (palavras) / %f - número real
    int numero_inteiro = 2;
    char letra = 'J';
    char nome = "Julia";
    float numero_real = 5.6;
    printf("Numero inteiro: %i\n1 caractere: %c\nPalavra: %s\nNumero real: %f", numero_inteiro, letra, nome, numero_real);

    system("pause");
    return 0;
}
