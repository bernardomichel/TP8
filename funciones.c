#include<stdio.h>

//Función sort, recibe dos arreglos de char y la longitud de cada uno.  //
// Devuelve si se puede formar el sugundo string con el primer		//
int sort(char arreglo1[], char arreglo2[],int num1,int num2)
{
	int state=0;		//Inicializo una variable que indica si los elementos de dos arreglos coinciden
					// state=0 indica que no hubo coincidencia.
	int i=0;		//Inicializo el índice del primer arreglo.
	int j=0;		//Inicializo el índice del segundo arreglo.


	for(j=0;j<num2;j++)
	{
		for(i=0;i<num1;i++)
		{
			if((*(arreglo2+j))==(*(arreglo1+i)))	//Comparo cada elemento del segundo arreglo con
			{					// cada elemento del primer arreglo.
			state=1;				//Si se haya coincidencia, lo indico con la variable state
			(*(arreglo2+j))=0;			// y cambio ambos elementos a 0 para no utilizarlos cuando
			(*(arreglo1+i))=0;			// compare elementos más adelante.
			i=num1;						//Una vez hallada la coindicencia adelanto el
			}						// índice para acelerar el proceso.
		}
		if(state==0)					//Si no hay coincidencia, entonces la segunda palabra
	                j=num2;					// no se puede formar la primera, así que adelanto el 
        }							// índice para acelerar el proceso.



	for(j=0;j<num2;j++)
	{
		if((*(arreglo2+j))!=0)	//Si algún elemento del segundo arreglo no es cero, es porque no se encuentra
		{			// en el primer arreglo, así que no se puede formar la segunda palabra.

		printf("La segunda palabra NO se puede formar completamente con las letras de la primera.\n\n");

		return;			//Imprimo el resultado correpondiente, y vuelvo al main.
		}
	}

	//Si llego a este punto es porque todos los elementos del segundo arreglo son ahora cero, es decir que hubo una
	// coincidencia para cada uno de los elementos del segundo arreglo original dentro del primero.

	printf("La segunda palabra se puede formar completamente con las letras de la primera.\n\n");

	return;				//Imprimero el resultado correpondiente, y vuelvo al main.
}

//funcion onlyletter, recibe un puntero al principio de un string//
//devuleve un cero si el string solo contiene letras, caso contrario devuelve -1//
int onlyletter(char* p2char)
{
	while(*p2char!='\0')
	{
		if(((*p2char)<='Z' && (*p2char)>='A') || ((*p2char)<='z' && (*p2char)>='a'));
		else return -1;
	}
	return 0;
}






