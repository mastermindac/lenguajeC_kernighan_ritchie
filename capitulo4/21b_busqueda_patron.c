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
    long lineno=0;
    int c,except=0,number=0,found=0;

    printf("%s\n",argv[2]);
    while(--argc >0 && (*++argv[1]=='-'))
        while(c = *++argv[0])
            switch(c){
                case 'x':
                    except=1;
                    break;
                case 'n':
                    number=1;
                    break;       
                default:         
                    printf("opcion ilegal %c\n",c); 
                    argc=0;
                    found=-1;
                    break;
        }

    if(argc!=1)
        printf("Uso: 21b_busqueda_patron -x -n patron\n");  
    else
        while(mygetline(line,MAXLINE)>0)
            if(strstr(line,argv[1])!=NULL){
                printf("%s",line);
                found++;
            }
    return found;

}