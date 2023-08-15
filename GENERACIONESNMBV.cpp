

#include<iostream>
#include<windows.h>
//libreria de configuraciones especificas
#include<locale.h>


#define color SetConsoleTextAttribute
using namespace std;

int main(){
	
setlocale(LC_CTYPE,"Spanish");

 //RESUMEN
 HANDLE hConsole= GetStdHandle( STD_OUTPUT_HANDLE);
 
 color(hConsole, 70);
cout<<"\t\t\t\tGENERACIONES DE LAS COMPUTADORAS."<<endl;
cout<<"\n\nPrimera generación (1940-1950)."<<endl;

cout<<"Características: Utilización de válvulas de vacío para procesamiento. Grandes, costosas y propensas a fallas.";
cout<<"\nLogros notables: ENIAC, UNIVAC I, EDSAC. Programación en lenguaje de máquina.";
cout<<"\nAplicaciones: Cálculos científicos y militares."<<endl;
cout<<"\nSegunda generación (1950-1960):";

cout<<"Características: Introducción de transistores en lugar de válvulas. Computadoras más pequeñas, eficientes y fiables.";
cout<<"\nLogros notables: IBM 1401, UNIVAC 1107. Uso continuado del lenguaje de máquina.";
cout<<"\nAplicaciones: Procesamiento de datos comerciales y científicos."<<endl;
cout<<"\nTercera generación (1960-1970):";

cout<<"Características: Invención de circuitos integrados. Mayor capacidad de procesamiento y reducción de tamaño.";
cout<<"\nLogros notables: IBM System/360, DEC PDP-8. Introducción de lenguajes de programación de alto nivel como COBOL y Fortran.";
cout<<"\nAplicaciones: Amplio uso en negocios, investigación y gobierno."<<endl;
cout<<"\nCuarta generación (1970-1980):";

cout<<"Características: Microprocesadores en un solo chip. Auge de las computadoras personales y avances en el rendimiento.";
cout<<"\nLogros notables: Altair 8800, Apple II. Desarrollo de lenguajes de programación más accesibles.";
cout<<"\nAplicaciones: Uso en el hogar, oficinas y educación."<<endl;
cout<<"\nQuinta generación (1980-presente):";

cout<<"Características: Avances en microprocesadores, IA y tecnología de chips. Mayor potencia de cómputo y diversidad de dispositivos.";
cout<<"\nLogros notables: Computadoras personales avanzadas, servidores potentes, dispositivos móviles, Internet de las cosas.";
cout<<"\nAplicaciones: Amplio espectro, desde tareas cotidianas hasta investigación científica y empresarial. Enfoque en la conectividad y la inteligencia artificial."<<endl;	
}
