/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    ordenacion ascendente

    ordenación de un array de forma ascendente
    herramientas: funciones, for
*/

#include <stdio.h>

void shellshort(int v[],int n);
int binsearch(int x,int v[],int n);

int main(){
    int i;
    int lista_desordenada[]={3,1,675,90,6,120,469,220,875};
    int numArray[]={6,3,120,456,875};
    int num=0;
    int pos_encontrado;

    /*busqueda binaria*/
    shellshort(lista_desordenada,9);

    /*Imprimir lista ordenada*/
    for(i=0;i<9;++i) printf("%d ",lista_desordenada[i]);

    printf("\n");

    for (int i=0;i<5;i++){
        num=numArray[i];
        pos_encontrado=-1;
        /*busqueda binaria*/
        pos_encontrado=binsearch(num,lista_desordenada,8);

        if(pos_encontrado>-1)
            printf("La posicion del numero %d es %d\n",num,pos_encontrado);
        else
            printf("Numero no encontrado\n");
    }
}

/*shellshort: ordena v[]*/
void shellshort(int v[],int n){
    int gap,i,j,temp;

    for(gap=n/2;gap>0;gap/=2)
        for(i=gap;i<n;i++)
            for(j=i-gap;(j>=0)&&(v[j]>v[j+gap]);j-=gap){
                temp=v[j];
                v[j]=v[j+gap];
                v[j+gap]=temp;
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