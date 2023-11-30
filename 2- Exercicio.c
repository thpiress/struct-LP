#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_usu
{
    char nome[150];
    int idade;
    char endereco[350];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_usu dados;

    printf("Recebendo Informações do usuario...");
    printf("\nDigite o nome do Usuario: ");
    gets(dados.nome);

    printf("\nDigite a Idade do Usuario: ");
    scanf("%d", &dados.idade);

    printf("\nDigite o Endereço do Usuario: ");
    scanf("%s", &dados.endereco);
    system("cls");

    // Exibindo dados:

    printf("Exibindo dados do Usuario...\n");
    printf("\nNome do Usuario: %s", dados.nome);
    printf("\nIdade do Usuario: %d", dados.idade);
    printf("\nEndererço do Usuario: %s", dados.endereco);

    return 0;
}