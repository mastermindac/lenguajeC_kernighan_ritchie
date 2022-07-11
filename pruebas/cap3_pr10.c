/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    búsqueda binaria

    búsqueda de un número dentro de un array ordenado
    herramientas: funciones, arreglos, if
*/

#include <stdio.h>

int binsearch(int x,int v[],int n);

int main(){
    int lista_ordenada[]={1,6,90,120,220,469,875,675};
    int numArray[]={6,23,120,456,875};
    int num=0;
    int pos_encontrado;

    for (int i=0;i<5;i++){
        num=numArray[i];
        pos_encontrado=-1;
        /*busqueda binaria*/
        pos_encontrado=binsearch(num,lista_ordenada,8);

        if(pos_encontrado>-1)
            printf("La posicion del numero %d es %d\n",num,pos_encontrado);
        else
            printf("Numero %d no encontrado\n",num);
    }
}

/*binsearch: encuentra x en v[]*/
int binsearch(int x,int v[],int n){
    int low,high,mid;

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(x<v[mid])
            high=mid-1;
        else if(x>v[mid])
            low=mid+1;
        else
            return mid;
    }
    return -1;
}