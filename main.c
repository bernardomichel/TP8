#include<stdio.h>
#include"funciones.h"

int main(int argc, char* argv[])
{
	char *mje1, *mje2;		//Creo punteros a char para cada argumento pasado por linea de comando.
	mje1=argv[1];				//Apunto al principio del primer string.
	mje2=argv[2];				//Apunto al principio del segundo string.

	if(argc==1)			//Si solo se introduce el nombre del programa, se muestra una breve descripcion del mismo
	{
		printf("\nEste programa compara dos palabras ingresadas por linea de comandos y le informa al usuario si la segunda palabra puede formarse completamente utilizando las letras de la primera palabra. Por ejemplo: la palabra \"casa\" puede formarse con las letras de la palabra \"acaso\", y la palabra \"perro\" no puede formarse con las letras de la palabra \"pero\".\n\n");
		return 0;
	}	
	
	if(argc!=3)			//verifico que se hayan introducido dos palabras
	{
		printf("Se ha introducido una cantidad incorrecta de palabras. Por favor introduzca dos palabras.\n");
		return 0;
	}

	printf("\n%s \n%s \n\n",mje1,mje2);		//Imprimo las palabras que se pasan por línea de comando


	int i=0, j=0;			//Inicializo índices para recorrer los strings, y los uso como contadores

	while(mje1[i++]!='\0');		//Aumento el contador hasta que llegue al terminador
	i--;				//Decremento el contador para no contar el terminador, y así
					// tener la longitud real de la palabra
		
	while(mje2[j++]!='\0');		//Repito el proceso para el segundo string
	j--;

	sort(mje1, mje2, i, j);	//Invoco a la función sort para dar los resultados esperados en el ejercicio
 
	return 0;

}
