// #include <time.h>
// char data_atual(void);

// int main(void)
// {
//     char datas[11]; 
//     data_atual(datas);
//     printf("%s" datas);
//     return 0;
// }

// char data_atual(void)
// {
//     struct tm *datetime;
//     int idia = datetime->tm_mday;
//     int imes = datetime->tm_mon + 1;
//     int iano = datetime->tm_year + 1900;

//     char diac[3];
//     char mesc[3];
//     char anoc[5];

//     if (idia < 10)
//     {
//         char aux;
//         sprintf(aux, "%d", idia);
//         diac[0] = '0';
//         diac[1] = aux;
//     }
//     else if (imes < 10)
//     {

//         char aux2;
//         sprintf(aux2, "%d", imes);
//         mesc[0] = '0';
//         mesc[1] = aux2;
//     }
//     else
//     {
//         sprintf(diac, "%d", idia);
//         sprintf(mesc, "%d", imes);
//     }

//     sprintf(anoc, "%d", iano);

//     char data_hoje[] = {diac[0], diac[1], '/', mesc[0], mesc[1], '/', anoc[0], anoc[1], anoc[2], anoc[3]};
    

//     // return data_hoje;
// }