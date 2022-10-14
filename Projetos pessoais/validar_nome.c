#include <stdio.h>
#include <string.h>
int validar_letras(char nome[], int tam);

int main(void)
{

    char nome[52];
    int tam;
    do
    {
        printf("Insira um nome\n");
        scanf("%s", nome);
        getchar();
        tam = strlen(nome);
    } while (!(validar_letras(nome, tam)));
    printf("Nome valida");

    return 0;
}

int validar_letras(char nome[], int tam)
{

    for (int i = 0; i <= (tam - 1); i++)
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