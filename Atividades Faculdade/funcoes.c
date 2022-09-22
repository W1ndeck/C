#include <stdio.h>

/* Implementação da função Fatorial */
int fat(int n)
{
    int i, f;
    f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}
/* Implementação da função Arranjo */

int arr(int n, int k)
{
    return (fat(n) / fat(n - k));
}

/* Implementação da função Combinação */

int comb(int n, int k)
{
    return (fat(n) / ((fat(k) * fat(n - k))));
}