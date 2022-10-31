#include <stdio.h>
#include <string.h>

void preenche_morador(Morador* mor);
void exibe_morador(Morador* mor);

typedef struct morador Morador;

struct morador
{
    char nome[51];
    char cpf[12];
    char idade[4];
    char ocupacao[12];
    char renda[7];
};