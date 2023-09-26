#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int n,i,j,suma;
	srand(time(NULL));
	printf("INGRESE LA LONGITUD DE LA MATRIZ:\N");
	scanf("%d",&n);
	int A[n][n];
	
	printf("Matriz aleatoria:\n");
	for (i=0; i<n; i++){
		for (j=0; <n; j++){
			if (i==j)
			A[i][j]=1;
			else
			A[i][j]=0;
			printf ("%d",A[i][j]);
		}
		printf("\n");
	}
		return 0;
		
	}
	

