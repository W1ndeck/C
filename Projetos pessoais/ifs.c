#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // scanf("tipo de entrada", &variavel)
    char x;
    printf("Por favor digite uma letra minuscula:\n");
    scanf("%c", &x);
    if (x >= 'a')
    {

        printf("A letra que você digitou em minusculo e %c:\n", toupper(x)); //toupper ´deixa a letra em maiuscula
    }

    return 0;
}