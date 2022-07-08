/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    conversor de char[] a numero

    a partir de un array de caracteres convertiremos a un doble
    herramientas: funciones, arreglos de cadenas
*/

#include <stdio.h>
#include <ctype.h>
#include "libreriacarac.h"


double atof(char s[]);

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (mygetline(line, MAXLINE) > 0) {
		printf("\t %6.3f\n",atof(line));
	}
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