#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int cuantosaleatorios;
	srand(time(NULL));
	int numeroAleatorio;
	
	printf("cuantos numeros desea sumar: \n");
	scanf("%d",&cuantosaleatorios);
	int a=0;
	int suma=0;
	while(a<cuantosaleatorios)
	{
		numeroAleatorio=rand()%100;
		printf ("numero aleatorio:%d\n", numeroAleatorio);
		suma=suma+numeroAleatorio;
		a++;
	}
	printf("la suma de los numeros aleatorios es de:%d", suma);
	return 0;
	
}


