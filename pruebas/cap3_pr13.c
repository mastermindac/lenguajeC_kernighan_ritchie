/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    modificacion del conversors
    modificacion: recogiendo el separador de decimales
*/

#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

char separadordecimal='.';

int mygetline(char line[], int max);
double atof(char s[]);


int main()
{
	char line[MAXLINE];
	int found = 0;

	//pide el separador decimal
	printf("Introdce el separador decimal:\n");
	separadordecimal=getchar();

	while (mygetline(line, MAXLINE) > 0) {
		printf("\t %6.3f\n",atof(line));
	}
	return 0;
}

/*mygetline: trae una linea y la pone en s, regresa su longitud*/
int mygetline(char s[], int lim)
{
	int c, i;
	i =0;
	printf("Introdce el numero:\n");
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
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

	if (s[i] == separadordecimal) //Saltar al decimal
		i++;

	for (power = 1.0; isdigit(s[i]); i++) { //Transforma a numero la parte decimal
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign*val/power;

}