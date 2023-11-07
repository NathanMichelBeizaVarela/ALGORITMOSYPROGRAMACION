#include <stdio.h>

int main(){
	FILE *archivo;
	
	archivo=fopen("archivo.txt","a");
	
	if(archivo==NULL){
		perror("ERROR AL CREAR EL ARCHIVO");
		return 1;
	}
	
	fprintf(archivo,"este es un nuevo archivo .\n");
	fclose(archivo);
	
	return 0;
}


