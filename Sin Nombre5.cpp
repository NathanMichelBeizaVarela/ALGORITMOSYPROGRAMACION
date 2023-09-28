#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	char text [10][10]=
	{
		"xime",
		"leo",
		"max",
	};
	
	printf("que numero quieres que imprima? ");
	scanf("%d",&n);
		if (n>=1&&n<=10) 
		{
		 	printf("%s", text[n-1]);
		}
		
return 0;
}
