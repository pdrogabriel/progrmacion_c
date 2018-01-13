
/* Mi primer programa en el lenguaje de programacion C. */
#include <stdio.h>

int buscarMayor(int array[]);

struct animales{
	char nombre[50];
	int edad;
	char sexo[10];
}animal1, animal2;

/*Comentario de la funcion principal*/
int main()
{
	/*Codificacion en la funcion principal*/

	int array[] = {3,1,4,2};
	int mayor = buscarMayor(array);

	printf("\nEl numero mayor es: %i", mayor);

	printf("\nIntroduce el nombre: ");
	scanf("%s", animal1.nombre);

      	printf("\nIntroduce la edad: ");
	scanf("%i",&animal1.edad);

	printf("\nIntroduce el sexo: ");
	scanf("%s", animal1.sexo);

	
	printf("\n\nIntroduce el nombre: ");
	scanf("%s", animal2.nombre);

	printf("\nIntroduce la edad: ");
	scanf("%i", &animal2.edad);

	printf("\nIntroduce el sexo: ");
	scanf("%s", animal2.sexo);

	printf("\n\n\nNombre animal1: %s", animal1.nombre);
	printf("\nEdad animal1: %i", animal1.edad);
	printf("\nSexo animal1: %s", animal1.sexo);

	printf("\n\nNombre animal2: %s", animal2.nombre);
	printf("\nEdad animal2: %i", animal2.edad);
  	printf("\nSexo animal2: %s", animal2.sexo);

	return 0;
}

int buscarMayor(int array[])
{
	int mayor = array[0];
	for(int i=1; i < 4; i++)
	{
		if(mayor < array[i])
		{
			mayor = array[i];
		}
	}
	return mayor;
}

/*Fin de todo el programa*/
