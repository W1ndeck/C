#include <stdio.h>
int medir_tamanho_array(char vetor[]);

int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){

    int tamanho;
    tamanho = medir_tamanho_array(meses);
    printf("%d", &tamanho);

    return 0;
}

int medir_tamanho_array(char vetor[]){

    int tamano_bits = sizeof(vetor); //retorna numero de bits de uma array
    int tamanho_tipo = sizeof(vetor[0]); //verifica o tipo que ta presente no vetor

    int tamanho_array = tamano_bits / tamanho_tipo;

    return tamanho_array;

}