#include <conio.h>
#include <stdio.h>
/* Contar palabras de una frase generica*/

int wordCounter(char *str);

int main(void){
	char *cadena = "hola mundo desde java en java pegado hola hola      desde desde";
	
	printf("%d",wordCounter(cadena));
	
	return 0;
}

int wordCounter(char *str){
	int i=0; 
	while( *str != 0){
		while( *str == ' ' ) // Ignoro espacios al principio
		     *str++;
		    
		while( *str != ' ' && *str != 0)
		     *str++;
		
	   	while( *str == ' ') // Ignoro espacios al final
	   	    *str++;	
	   	    
		i++; // Counter
	}
	return i;
}
