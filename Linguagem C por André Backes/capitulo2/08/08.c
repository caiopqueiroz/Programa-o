// Criando variáveis de escopo local - dentro de blocos de chaves
# include <stdlib.h>
# include <stdio.h>

void funcao1(){
    // Essa variável só existe dentro da função criada funcao1()
    int x;
}

void funcao2(){
    int x = 10;
}

int main(){
    // Dentro da função main(), a variável x não tem o valor 10 a não ser que a função funcao2() seja chamada
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    if (x == 5) {
        // A variável y só foi declarada dentro do bloco de comandos if, ou seja, caso o x não seja igual a 5, ela não existirá
        // Além disso, ela só pode ser referenciada dentro dessas chaves
        int y = 1;
        printf("Valor de y: %d\n", y);
    }
    system("pause");
    return 0;
}
