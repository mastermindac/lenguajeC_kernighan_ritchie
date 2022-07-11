/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    librería para las funciones de lectura/escritura/ordenación de líneas
*/

#include <stdio.h>
#include <ctype.h>
#include "librerialineas.h"
#include "gestorbuffer.h"


/*readlines: lee lineas de entrada*/
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;

	while ((len = mygetline(line, MAXLEN)) > 0){
        if(nlines>=maxlines||(p=alloc(len))==NULL)
            return -1;
        else{
            line[len-1]='\0';
            mystrcpy(p,line);
            lineptr[nlines++]=p;
        }
    }

	return nlines;
}
void writelines(char *lineptr[], int nlines){
    int i;

    for(i=0;i<nlines;i++)
        printf("%s\n",lineptr[i]);
}

/*qsort: ordenacion de forma alfabetica*/
void qsort(char *lineptr[],int left,int right){
	int i, last;

	if (left >= right)
		return;
	swap(lineptr, left, (left + right) / 2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (mystrcmp(lineptr[i],lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	swap(lineptr, left, last);
	qsort(lineptr, left, last-1);
	qsort(lineptr, last+1, right);
}

/*qsortGen: ordenacion de forma generica*/
void qsortGen(char *lineptr[],int left,int right,int (*comp)(void *,void *)){
	int i, last;

	if (left >= right)
		return;
	swap(lineptr, left, (left + right) / 2);
	last = left;
	for (i = left+1; i <= right; i++)
		if ((*comp)(lineptr[i],lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	swap(lineptr, left, last);
	qsort(lineptr, left, last-1);
	qsort(lineptr, last+1, right);
}

/*mygetline: trae una linea y la pone en s, regresa su longitud*/
int mygetline(char *line, int lim)
{
	int c, i;
	i =0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n'){
		*line++ = c;
        i++;
    }
	if (c == '\n')
    {
		*line++ = c;
        i++;
    }
	*line = '\0';
	return i;
}
/*mystrcpy: copia t en s*/
void mystrcpy(char *s, char *t)
{
    while ((*s=*t)!='\0'){
        s++;
        t++;
    } 
}
/*strcmp: regresar <0 si s<t, 0 si s==t, >0 si s>t*/
int mystrcmp(char *s, char *t){

    for(;*s==*t;s++,t++)
        if(*s=='\0')
            return 0;
    
    return *s-*t;
}

/*swap: intercambia dos punteros*/
void swap(char *v[],int i,int j){
    char *temp;

    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}

int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
		return -1;
	else if (v1 > v2)
		return 1;
	else
		return 0;
}

double atof(char s[])
{
	double val, power;
	int i, sign; //Indice del arreglo de caracteres

	for (i = 0; isspace(s[i]); i++) //Elimina los espacios en blanco
		;

	sign = (s[i] == '-') ? -1 : 1; //Signo negativo
	if (s[i] == '+' || s[i] == '-') //Saltamos caracter + o -
		i++;

	for (val = 0.0; isdigit(s[i]); i++) //Transforma a numero la parte entera
		val = 10.0 * val + (s[i] - '0');

	if (s[i] == '.') //Saltar al decimal
		i++;

	for (power = 1.0; isdigit(s[i]); i++) { //Transforma a numero la parte decimal
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign*val/power;

}