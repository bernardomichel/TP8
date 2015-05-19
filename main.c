#include<stdio.h>

int main(int argc, char* argv[])
{
	char *mje1, *mje2;		//Creo punteros a char para cada argumento pasado por linea de comando.
	mje1=argv[1];				//Apunto al principio del primer string.
	mje2=argv[2];				//Apunto al principio del segundo string.

	if((validez(argc))==0)			//verifico la validez de los datos ingresados
		return 0;


	printf("\n%s \n%s \n\n",mje1,mje2);		//Imprimo las palabras que se pasan por línea de comando.


	int i=0, j=0;			//Inicializo índices para recorrer los strings, y los uso como contadores.

	while(mje1[i++]!='\0');		//Aumento el contador hasta que llegue al terminador.
	i--;				//Decremento el contador para no contar el terminador, y así
					// tener la longitud real de la palabra.
		
	while(mje2[j++]!='\0');		//Repito el proceso para el segundo string.
	j--;

	sort(mje1, mje2, i, j);	//Invoco a la función sort para dar los resultados esperados en el ejercicio.
 
	return 0;

}
