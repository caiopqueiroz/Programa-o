// Definindo uma variável de escopo global
# include <stdio.h>
# include <stdlib.h>

// Essa é uma variável que pode ser acessada de qualquer função do programa
int x = 5;

// Acessando dentro da função criada incremento()
void incremento(){
    x += 1;
}

// Acessando pela função main()
int main(){
    printf("Exibindo a variavel x: %d", x);
    printf("\nExecutando a funcao incremento: ");
    incremento();
    printf("\nExibindo agora a variavel incrementada: %d\n", x);
    system("pause");
    return 0;
}
