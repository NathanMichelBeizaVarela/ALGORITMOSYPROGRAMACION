#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find(int b[], int l){
	int a, index;
	
	a=100000;
	index= -1;
	for (int i =0;i<l;i++)
	if (b[l]<a)
	{
		a=b[l];
		index =l;
	}
	return index;
}

int main (){
	int l = 50;
	int b[l];
	
	srand (time (NULL));
	for (int i=0;i<l;i++)
	{
	b[i]= rand ()%100-50;
	printf ("*%d",b[i]);
	}
printf ("\n\nMin value: \t%d", b[find(b,l)]);
return 0;	
}
	
	

