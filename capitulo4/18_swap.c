/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    intercambio de números enteros

    ordenación de un array usando recursividad
    herramientas: funciones, for, arrays
*/
#include <stdio.h>

void swap(int *px, int *py);

int main(){
    int num1,num2;

    num1=20;
    num2=35;

    printf("Numeros antes de swap num1: %d,num2: %d\n",num1,num2);
    //swap sin punteros
    swap(&num1,&num2);
    printf("Numeros despues de swap num1: %d,num2: %d\n",num1,num2);
}
void swap(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}