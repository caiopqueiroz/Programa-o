// Usando a função getchar() para ler um caractere
# include <stdio.h>
# include <stdlib.h>

int main(){
    char c;
    printf("Digite um caractere: ");
    // Fazendo uso de getchar() para ler um caractere numérico ou de texto
    c = getchar();
    // Se for usado o place holder %c, ele exibirá o próprio caractere digitado
    printf("Caractere: %c\n", c);
    // Se usado %d, o seu código ASCII será exibido
    printf("Codigo ASCII: %d\n", c);
    system("pause");
    return 0;
}
