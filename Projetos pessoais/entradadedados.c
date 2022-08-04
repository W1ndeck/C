#include <stdio.h>
#include <stdlib.h>

int main()
{
    // scanf("tipo de entrada", &variavel)
    int x, y;
    printf("Por favor digite um numero:\n");
    scanf("%i", &x);

    printf("Por favor digite um numero:\n");
    scanf("%d", &y);
    
    printf("X = %i e Y = %i\n", x, y);

    return 0;
}