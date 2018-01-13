#include <stdio.h>

struct animales{
	char nombre[50];
	int edad;
	char sexo[10];
}animal1, animal2;

int main()
{
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
