#include <stdio.h>

int main(void) {
float n1, n2, n3, med;
	printf("Calculo da media\n");
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a nota 2: ");
	scanf("%f", &n2);
	printf("Informe a nota 3: ");	
	scanf("%f", &n3);
	med = (n1 + n2 + n3) / 3;
	printf("Media do aluno: %.2f", med);
	return 0;
}