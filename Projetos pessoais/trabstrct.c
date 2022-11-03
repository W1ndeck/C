#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct morador Morador;

struct morador
{
    char nome[51];
    char cpf[12];
    char idade[4];
    char renda[7];
    char status;
};

int menuPrincipal(void);
Morador *preencheMorador(void);
void gravaMorador(Morador *);
void exibeMorador(Morador *);
void buscaMorador(Morador *);

int main(void)
{

    Morador *fulano;
    int opcao;
    printf("Programa cadastro de Alunos");
    opcao = menuPrincipal();
    while (opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            fulano = preencheMorador();
            gravaMorador(fulano);
            free(fulano);
            break;
        case 2:

            fulano = buscaMorador;

        default:
            break;
        }

        opcao = menuPrincipal();
    }
}

int menuPrincipal(void)
{

    int op;
    printf("\nMenu principal\n");
    printf("1 - Cadastra Aluno\n");
    printf("2- Pesquisa Aluno\n");
    printf("3- Alterar Aluno\n");
    printf("4- Excluir Aluno\n");
    printf("5- Listar Alunos\n");
    printf("6- Listar alunos por curso\n");
    printf("0- Encerrar programa\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &op);
    return op;
}

Morador *preencheMorador(void)
{

    Morador *mor;
    mor = (Morador *)malloc(sizeof(Morador));
    printf("Insira o nome do morador: ");
    scanf(" %51[^\n]", mor->nome);
    printf("\nInsira a idade do morador: ");
    scanf(" %4[^\n]", mor->idade);
    printf("\nInsira o cpf do morador: ");
    scanf(" %12[^\n]", mor->cpf);
    printf("\nInsira a renda do morador: ");
    scanf(" %7[^\n]", mor->renda);
    mor->status = 'm';
    return mor;
}

void gravaMorador(Morador *mor)
{

    FILE *fp;
    fp = fopen("moradores.dat", "ab");
    if (fp == NULL)
    {

        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possivel continuar este programa...\n");
        exit(1);
    }
    fwrite(mor, sizeof(Morador), 1, fp);
    fclose(fp);
}