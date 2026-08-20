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

    // Exibindo 3 tipos de variáveis: %i - número inteiro / %c - caractere / %f - número real
    int numero_inteiro = 2;
    char letra = 'J';
    float numero_real = 5.6;
    printf("Numero inteiro: %d\n1 caractere: %c\nNumero real: %f\n", numero_inteiro, letra, numero_real);

    system("pause");
    return 0;
}
