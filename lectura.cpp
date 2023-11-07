#include <stdio.h>

int main (){
	char caracter;
	int count;
	bool condition;
	FILE*file=fopen("line.txt","r");
	
	if (file==NULL){
		perror("ERROR EN LA APERTURA DEL ARCHIVO");
		return 1;
	}
	count=0;
	condition=false;
	
	while(feof(file)==0)
	{
		caracter=fgetc(file);
		
		if(caracter=='\n')
		condition=true;
		
		if(!condition)
		if(caracter==',')
		count++;
		
		
	}
	printf("%d",count);
	
	fclose(file);
	printf("\n\n\nTODO ESTA VIENTO EN POPA...\n\n\n\n");
	
	return 0;
}






