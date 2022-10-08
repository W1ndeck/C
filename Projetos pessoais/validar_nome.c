#include <stdio.h>
#include <string.h>
int validar_nome(char nome[]);

int main(void)
{

    char nome[52];

    printf("Insira um nome\n");
    scanf("%[A-Z a-z]", nome);
    getchar();

    while (!validar_nome(nome))
    {
        printf("Nome invalido!\n");
        scanf("%[A-Z a-z]", nome);
        getchar();
    }

    return 0;
}

int validar_nome(char nome[])
{

    for (int i; nome[i] != '\0'; i++)
    {

        if (((nome[i] > "z") || (nome[i] < "a")) && ((nome[i] > "Z") || (nome[i] < "A")))
        {

            return 0;
        }
        else
        {

            return 1;
        }
    }
}