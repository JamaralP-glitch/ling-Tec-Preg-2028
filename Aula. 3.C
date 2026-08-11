#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159


int main() {

// area do circulo
	
	float raio, area, raioQuadrado;
	
	printf(" Insira o valor de R: \n");
     scanf("%f", &raio);
        	
	 	
	raioQuadrado =  raio*raio;	
	area = pi * raioQuadrado;

	
	printf("A area do raio %f = %f\n", raio, area);

// area do trapézio descednet, brill

	float B, b, h, calculo;
	
printf("informe o valor B:\n"); 
	scanf("%f", &B);	
	
printf("informe o valor b:\n"); 
	scanf("%f", &b);	
	
	printf("informe o valor h:\n");
	scanf("%f", &h);
	
	calculo = ((B + b) * h) /2;
	
	printf("Area total do trapezio", calculo);
	

	return 0;

}
	
	
