#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa
{

    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_pessoa pessoa;

    printf("Recebendo informações...\n");
    printf("Digite o nome do usuario: ");
    gets(pessoa.nome);

    printf("Digite a idade do usuario: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o peso do usuario: ");
    scanf("%f", &pessoa.peso);

    printf("Digite a altura do usuario: ");
    scanf("%f", &pessoa.altura);
    system("cls");

    // exibindo inforamçao:

    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    printf("\nPeso: %.2f", pessoa.peso);
    printf("\naltura: %.2f", pessoa.altura);

    return 0;
}