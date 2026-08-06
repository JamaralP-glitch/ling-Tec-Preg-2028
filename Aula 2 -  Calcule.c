#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float a,b,c,soma;
	
	printf("Informe a nota 1: ");
	scanf("%f",&a);
	
	printf("Informe a nota 2: ");
	scanf("%f", &b);
	
	printf("Informe a nota 3: ");
	scanf("%f", &c);
	
	soma = ( (a+b+c) /3 );
	
	printf("A media da soma das tres notas e %f", soma);

	return 0;
}
