#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int n,i,j,k;
	srand(time(NULL));
	printf("INGRESE LA LONGITUD DE LA MATRIZ:\n");
	scanf("%d",&n);
	int A[n][n], B[n][n], C[n][n];
	
	printf("Matriz 	A:\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand()%(9+1-1)+1;
			printf ("%d",A[i][j]);
		}
		printf("\n");
	}
	
		
			printf("Matriz B:\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			printf ("%d",A[j][i]);
		}
		printf("\n");
	}
	printf("Matriz C:\n");
	int temporal;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			temporal=0;
		for(k=0;k<n;k++){
			temporal +=A[i][k]*B[k][j];
		}
		C[i][j]=temporal;
		printf("%d",C[i][j]);
	}
	printf("\n");
}

	
