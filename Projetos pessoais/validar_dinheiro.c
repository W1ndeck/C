#include <stdio.h>
#include <string.h>
int validar_dinheiro(char dinheiro[], int tam);
char decimais[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(void)
{
    char valor[11];
    int tam;
    do
    {
        printf("\ndigite o valor depositado\n");
        scanf("%s", valor);
        getchar();
        tam = strlen(valor);
        printf("%d", tam);

    } while (!(validar_dinheiro(valor, tam)));
    printf("\nvalor valido\n");
    return 0;
}

int validar_dinheiro(char dinheiro[], int tam)
{

    if ((dinheiro[tam - 3] != ',') && (dinheiro[tam - 3] != '.'))
    {
        return 0;
    }
    else
    {

        for (int i = 0; (dinheiro[i] != '\0'); i++)
        {
            for (int j = 0; j <= 10; j++)
            {

                if ((j == 10) && (dinheiro[i] != decimais[j]))
                {
                    return 0;
                }
                else if (dinheiro[i] == decimais[j])
                {
                    break;
                }
                else if (i == (tam - 3))
                {

                    break;
                }
            }
        }
    }

    return 1;
}