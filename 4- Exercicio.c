#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa
{
    char nome[200];
    char nascimento[250];
    char rg[350];
    char cpf[350];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_pessoa usuario[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Solicitando dados do %dº usuario...\n\n", i + 1);
        printf("Digite o Nome do %dº usuario: ", i + 1);
        gets(usuario[i].nome);

        printf("Digite a Data de nascimento do usuario: ");
        gets(usuario[i].nascimento);

        printf("Digite o RG do usuario: ");
        gets(usuario[i].rg);

        printf("Digite o CPF do usuario: ");
        gets(usuario[i].cpf);
        fflush(stdin);
        system("cls");
    }

    // Exibindo Resultado:

    printf("Exibindo Resultado dos Usuarios...\n");

    for (i = 0; i < 5; i++)
    {
        printf("\n\ntNome do %dº Usuario: %s", i + 1, usuario[i].nome);
        printf("\nData de Nascimento do Usuario: %s", usuario[i].nascimento);
        printf("\nRG do usuario: %s", usuario[i].rg);
        printf("\nCPF do usuario: %s", usuario[i].cpf);
    }

    return 0;
}