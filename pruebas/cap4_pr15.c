/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    modificando el uso de los punteros con los arreglos

    modificacion: añadir nueva funcion n caracteres strcpy
    
*/
#include <stdio.h>
#define MAXLINE 1000 /*tamaño máximo de la línea*/

void mystrcpy(char *s, char *t);
void mystrcpyn(char *s, char *t,int n);
int strcmp(char *s, char *t);

int main(){
    char origen[]="Paco tiene un coche azul\0";
    char copia[MAXLINE];

    mystrcpy(copia,origen);
    printf("%s\n",copia);
    printf("%d",strcmp(copia, origen));

    return 0;
}
void mystrcpy(char *s, char *t)
{
    while ((*s=*t)!='\0'){
        s++;
        t++;
    } 
}

void mystrcpyn(char *s, char *t,int n)
{
    int i=0;
    while (((*s=*t)!='\0')&&(i<=n)){
        s++;
        t++;
        i++;
    } 
}

/*strcmp: regresar <0 si s<t, 0 si s==t, >0 si s>t*/
int strcmp(char *s, char *t){

    for(;*s==*t;s++,t++)
        if(*s=='\0')
            return 0;
    
    return *s-*t;
}