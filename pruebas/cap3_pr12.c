/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    modificacion de encuentra el patrón
    modificacion: devuelve el número de ocurrencias
*/
#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "es";

int main()
{
	char line[MAXLINE];
	int found = 0;
	int numoc=0;

	while (mygetline(line, MAXLINE) > 0) {
		if ((numoc=strindex(line, pattern))>0) {
			printf("%s %d", line,numoc);
			numoc=0;
			found++;
		}
	}
	return found;
}

/*mygetline: trae una linea y la pone en s, regresa su longitud*/
int mygetline(char s[], int lim)
{
	int c, i;
	i =0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/*strindex: regres el índice de t en s, -1 si no existe*/
int strindex(char s[], char t[]){
    int i,j,k;
	int numocurrencias=0;

    for (i = 0; s[i]!='\0'; i++){
        for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
        ;
        if(k>0&&t[k]=='\0')
			numocurrencias++;
    }
    return numocurrencias;
}