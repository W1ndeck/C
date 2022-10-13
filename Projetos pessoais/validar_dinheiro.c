#include <stdio.h>
#include <string.h>
int validar_dinheiro(char dinheiro[]);

int main(void)
{

    char nome[52];
    scanf("%s", nome);
    getchar();
    int tam = sizeof(nome) / sizeof(nome[1]);
    printf("%d", tam);
    printf("%s", nome);

    return 0;
}

int validar_dinheiro(char dinheiro[])
{

     for (int i = 0; dinheiro[i] != "\0"; i++)
     {

         if ((dinheiro[] != ",") || (dinheiro[] != "."))
         {

             return 0;
         }
         else
         {
             for (int j = 0; j <= 10; j++)
             {

                 if ((j == 10) && (data[i] != decimais[j]))
                 {
                     return 0;
                 }
                 else if (data[i] == decimais[j])
                 {
                     break;
                 }
             }
         }
     }

//     return 0;
// }