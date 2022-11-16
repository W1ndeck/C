#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicar(char *);
static char *lelinha(void);

typedef struct cliente Cliente;

struct cliente
{
    int codigo;
    char *nome;
    Cliente *prox;
};

int main(void)
{
    Cliente *clnt;
    Cliente *lista;
    // crindo primeiro cliente
    clnt = (Cliente *)malloc(sizeof(Cliente));
    clnt->codigo = 1;
    printf("Nome do cliente %d", clnt->codigo);
    clnt->nome = lelinha();
    clnt->prox = NULL;
    lista = clnt;
    // criando segundo cliente
    clnt = (Cliente *)malloc(sizeof(Cliente));
    clnt->codigo = 2;
    printf("Nome do cliente %d", clnt->codigo);
    clnt->nome = lelinha();
    clnt->prox = NULL;
    lista = clnt;

    return 0;
}

static char *lelinha(void)
{
    char linha[255];
    scanf(" %26[^\n]", linha);
    return duplica(linha);
}

char *duplica(char *s)
{
    int n = strlen(s) + 1;
    char *d = (char *)malloc(n * sizeof(char));
    strcpy(d, s);
    return d;
}
