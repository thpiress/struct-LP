#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_alunos
{
    char nome[200];
    int idade;
    float notas[2];
    float medias;
    float soma;

};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_alunos aluno[3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Recebendo Informações do %dº aluno...\n\n", i + 1);
        printf("Digite o nome do %dº aluno: ", i + 1);
        gets(aluno[i].nome);

        printf("Digite a Idade do %dº aluno: ", i + 1);
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite as duas notas do %dº aluno: ", i + 1);
            scanf("%f", &aluno[i].notas[j]);
            aluno[i].soma += aluno[i].notas[j];
        }
        aluno[i].medias = aluno[i].soma / j;
        fflush(stdin);
        system("cls");
    }

    // Exibindo Resultado:

    printf("Exibindo Resultados dos Alunos...\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome do Aluno: %s", aluno[i].nome);
        printf("\nIdade do Aluno: %d", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("\nNotas do aluno: %.1f", aluno[i].notas[j]);
        }

        printf("\nMedia do Aluno: %.1f", aluno[i].medias);
    }

    return 0;
}