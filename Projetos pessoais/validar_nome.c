#include <stdio.h>
#include <string.h>
int validar_letras(char nome[]);

int main(void)
{

    char nome[52];

    printf("Insira um nome\n");
    scanf("%s", nome);
    getchar();

    while (!(validar_letras(nome)))
    {
        printf("Nome invalido!\n");
        scanf("%[A-Z a-z]", nome);
        getchar();
    }

    return 0;
}

int validar_letras(char nome[])
{

    for (int i = 0; nome[i] != '\0'; i++)
    {

        if (((nome[i] <= 'z') && (nome[i] >= 'A')))
        {

            if (((nome[i] > 'Z') && (nome[i] < 'a')))
            {

                return 0;
            }
        }
        else
        {

            return 0;
        }
    }

    return 1;
}