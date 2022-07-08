/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    ordenacion aquickshort Hoare

    ordenación de un array usando recursividad
    herramientas: funciones, for, arrays
*/
#include <stdio.h>

void swap(int v[],int i,int n);
void qsort(int v[],int left,int right);

int main(){
    int i;
    int arreglo_ordenar[]={3,1,675,90,6,120,469,220,875};

    qsort(arreglo_ordenar,0,8);
    for(i=0;i<9;i++){
        printf("%d,",arreglo_ordenar[i]);
    }   
    printf("\n");
    return 0;
}

void qsort(int v[],int left,int right){
	int i, last;

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

void swap(int v[],int i,int j){
    int temp;

    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}