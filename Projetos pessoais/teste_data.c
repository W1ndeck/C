#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convertDataToInt(char *data, int func);
int compararDatas(char *datainicial, char *datafinal, char *dataarch);

int main(void)
{
    char data1[11];
    char data2[11];
    char data3[11];
    printf("insira data inicial");
    scanf("%s", data1);
    printf("insira data final");
    scanf("%s", data2);
    printf("insira a data que quer verificar se esta no intervalo");
    scanf("%s", data3);
    int valor = compararDatas(data1, data2, data3);
    printf("%d", valor);

    return 0;
}

int convertDataToInt(char *data, int func)
{

    // func = 1 = dia
    // func = 2 = mes
    // func = 3 = ano

    if (func == 1)
    {

        int dia = 0;
        int aux = 1;
        for (int i = 1; i >= 0; i--)
        {

            dia += (data[i] - '0') * aux;
            aux *= 10;
        }
        return dia;
    }
    else if (func == 2)
    {

        int mes = 0;
        int aux = 1;
        for (int i = 4; i >= 3; i--)
        {

            mes += (data[i] - '0') * aux;
            aux *= 10;
        }
        return mes;
    }
    else if (func == 3)
    {

        int ano = 0;
        int aux = 1;
        for (int i = 9; i >= 6; i--)
        {

            ano += (data[i] - '0') * aux;
            aux *= 10;
        }
        return ano;
    }
}

int compararDatas(char *datainicial, char *datafinal, char *dataarch)
{

    int diaincial, mesinicial, anoinicial, diafinal, mesfinal, anofinal, diaarch, mesarch, anoarch;
    diaincial = convertDataToInt(datainicial, 1);
    mesinicial = convertDataToInt(datainicial, 2);
    anoinicial = convertDataToInt(datainicial, 3);

    diafinal = convertDataToInt(datafinal, 1);
    mesfinal = convertDataToInt(datafinal, 2);
    anofinal = convertDataToInt(datafinal, 3);

    diaarch = convertDataToInt(dataarch, 1);
    mesarch = convertDataToInt(dataarch, 2);
    anoarch = convertDataToInt(dataarch, 3);

    if ((anoarch <= anofinal) && (anoarch >= anoinicial) && (anoinicial < anofinal))
    {
        if ((anoarch == anofinal) && (mesarch == mesfinal) && (diaarch <= diafinal))
        {
            return 1;
        }
        else if ((anoarch == anofinal) && (mesarch < mesfinal))
        {

            return 1;
        }
        else if ((anoarch == anoinicial) && (mesarch == mesinicial) && (diaarch >= diaincial))
        {

            return 1;
        }
        else if ((anoarch == anoinicial) && (mesarch > mesinicial))
        {

            return 1;
        }
        else if (((anofinal - anoinicial) > 1) && (anoarch < anofinal) && (anoarch > anoinicial))
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }
    else if ((anoinicial == anofinal) && (anoarch == anoinicial))
    {

        if ((mesinicial == mesfinal) && (mesinicial == mesarch) && (diaarch >= diaincial) && (diaarch <= diafinal))
        {

            return 1;
        }
        else if ((mesarch > mesinicial) && (mesarch == mesfinal) && (diaarch <= diafinal))
        {

            return 1;
        }
        else if ((mesarch < mesfinal) && (mesarch == mesinicial) && (diaarch >= diaincial))
        {

            return 1;
        }
        else
        {

            return 0;
        }
    }
    else
    {

        return 0;
    }
}