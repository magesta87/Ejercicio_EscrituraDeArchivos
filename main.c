/***********************************************************
Autor: Agesta Mariano
Ejercicio: Escritura de archivo de texto
**********************************************************/

#include <stdio.h>
#define MAX_DNI 10
#define ALUMNOS 3

typedef struct{

  char dni[MAX_DNI];
  int modelo;
  double nota;
}notaEstudiante;

int main(){

FILE *f; //Declarar la variable tipo puntero
int i;
notaEstudiante notas[ALUMNOS]={{"32.970.497", 2, 8.50},{"3.354.054", 1, 9.33},{"36.987.457", 1, 7.98}};

f = fopen("notas.txt", "w"); // Abrir el fichero con la función fopen() en modo escritura ("w")

if(f == NULL){ //Comprobar que el fichero se ha abierto correctamente.

  printf("Error al crear el archivo de texto.\n");
  return 1;
}else{
  printf("El archivo se creo correctamente.");
}

for(i=0;i<ALUMNOS;i++) //Escribir la información del fichero con funciones como fprintf().

  fprintf(f, "%s %d %.2lf", notas[i].dni, notas[i].modelo, notas[i].nota);

 
fclose(f);//Cerrar el fichero con la función fclose()


 return 0;
}

