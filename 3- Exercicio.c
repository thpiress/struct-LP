#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_livro
{
    char nome[150];
    char autor[200];
    char categoria[300];
    float preco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_livro livro[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Solicitando dados do %dº Livro...\n", i + 1);
        printf("Digite o Nome do %dº Livro: ", i + 1);
        gets(livro[i].nome);

        printf("Digite o nome do Autor: ");
        gets(livro[i].autor);

        printf("Digite a Categoria do Livro: ");
        gets(livro[i].categoria);

        printf("Digite o Preço do %dº Livro: ", i + 1);
        scanf("%f", &livro[i].preco);
        fflush(stdin);
        system("cls");
    }

    // Exbindo Resultado:

    printf("Exibindo dados dos Livros...\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome do %dº Livro: %s ", i + 1, livro[i].nome);

        printf("\nNome do Autor: %s ", livro[i].autor);

        printf("\nCategoria do Livro: %s ", livro[i].categoria);

        printf("\nPreço do %dº Livro: %.2f ", i + 1, livro[i].preco);

    }

    return 0;
}