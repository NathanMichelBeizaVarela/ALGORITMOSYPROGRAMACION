#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int n,i,j,suma;
	srand(time(NULL));
	printf("INGRESE LA LONGITUD DE LA MATRIZ:\n");
	scanf("%d",&n);
	int A[n][n];
	
	printf("Matriz aleatoria:\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand()%(9+1-1)+1;
			printf ("%d",A[i][j]);
		}
		printf("\n");
	}
	
		
			printf("Matriz t:\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf ("%d",A[j][i]);
		}
		printf("\n");
	}
	}
	
