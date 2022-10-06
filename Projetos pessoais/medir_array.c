#include <stdio.h>
#include <string.h>
int medir_tamanho_array(char vetor[]);
char decimais[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(void)
{
    int tamanho = 0;
    tamanho = medir_tamanho_array(decimais);
    printf("\n%d\n", tamanho);

    return 0;
}

int medir_tam_array_str(char vetor[])
{
    return strlen(vetor);
}