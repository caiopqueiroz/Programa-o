# include <stdio.h>

int main() {

    // declarando uma struct para um cadastro

    struct cadastro {

        char nome[50];
        int idade;
        float altura;
    };

    // criando uma variável do tipo criado cadastro

    struct cadastro c1;

    // atribuindo valores para essa variável

    strcpy(c1.nome, "Caio");

    c1.idade = 19;

    c1.altura = 1.75;

    // exibindo esses valores

    //printf("Criei um cadastro no nome de %s\nIdade %d\nAltura %.2f", c1.nome, c1.idade, c1.altura);

    // função para atribuir nomes: strcpy(variavel, "nome")

    // função para ler nomes do teclado: fgets(variavel, tamanho, stdin)

    // criando dois cadastros ao mesmo tempo

    struct cadastro cadastros[2];

    for (int contador = 0; contador < 2; contador++) {

        printf("Digite o nome da pessoa %d: ", contador + 1);
        fgets(cadastros[contador].nome, 50, stdin);

        printf("Idade: ");
        scanf("%d", &cadastros[contador].idade);

        printf("Altura: ");
        scanf("%f", &cadastros[contador].altura);

        getchar();
    }

    for (int contador = 0; contador < 2; contador++) {

        //printf("\n%s %d %.2f", cadastros[contador].nome, cadastros[contador].idade, cadastros[contador].altura);
    }

    // definindo uma struct com apelido usando typedef

    typedef struct {

        char nome[50];
        int idade;
        float peso;
    } cad;

    // criando uma variável do tipo criado - cad

    cad cadastro1;

    cadastro1.idade = 19;

    printf("%d", cadastro1.idade);

    return 0;
}
