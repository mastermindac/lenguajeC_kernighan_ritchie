/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    ordenación de las líneas de entrada del usuario

    uso de arreglo de punteros para el almacenamiento y ordenación de lineas
    herramientas: punteros, arreglos, funciones
*/
#include <stdio.h>
#include <string.h>
#include "librerialineas.h"
#include "gestorbuffer.h"

#define MAXLINES 5000 /*max numero de lineas a ordenar*/

char *lineptr[MAXLINES];

/*ordena las líneas*/
int main(){
    int nlines;
    if((nlines=readlines(lineptr,MAXLINES))>=0){
        qsort(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
        return 0;
    }else{
        printf("error: entrada demasiado grande para ser ordenado\n");
        return 1;
    }
}