/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    busqueda de patron por comando

    uso de arreglo de punteros recogidos desde linea de comandos
    herramientas: punteros, arreglos, funciones, main
*/

#include <stdio.h>
#include <string.h>
#include "librerialineas.h"
#include "gestorbuffer.h"

#define MAXLINE 1000

/*find: imprime las lineas que coincidan con el patron del 1er argumento*/
int main(int argc, char *argv[]){
    char line[MAXLINE];
    char *substr;
    int found;

    if(argc!=2)
        printf("Uso: 21_busqueda_patron patron\n");  
    else
        while(mygetline(line,MAXLINE)>0){
            found=0;
            substr=line;
            while((substr=strstr(substr,argv[1]))!=NULL){
                found++;
                substr++;
            }
            if(found>0)
                printf("Patron %s encontrado %d veces\n",argv[1],found);
        }
    return found;

}