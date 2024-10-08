/**************************************
Autor: David Roa Neisa
Materia: Sistemas Operativos
Fecha: 18/07/2024
Tema: Introduccion al lenguaje c y los entornos 
  -Entornos en la web(Cloud/Nube)
  -Comandos principales de linux 
  -programa 0: Hola mundo
***************************************/
#include <stdio.h>
#include <stdlib.h>

#define size 10

int main(int argc, char **argv){
  int rows,cols,i,j;
  int *matrix;
  rows=(int) atof(argv[1]);
  cols=(int) atof(argv[2]);
  matrix=(int **)malloc(rows*sizeof(int *));
  for(i=0;i<rows;i++){
    matrix[i]=(int *)malloc(cols*sizeof(int *));
  }
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      matrix[i][j]=i*j;
    }
  }
   for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      printf("%d",matrix[i][j]);
    }
     printf("\n");
  }
   for(i=0;i<rows;i++){
    free(matrix[i]);
  }
  free(matrix);
  return 0;
}