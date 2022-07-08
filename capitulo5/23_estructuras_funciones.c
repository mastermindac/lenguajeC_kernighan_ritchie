/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    estructuras de punteros y rectangulos

    creación y uso de estructuras
    herramientas: estructuras, funciones
*/
#include <stdio.h>

/*Estructura punto*/
struct point{
    int x;
    int y;
};

struct rect{
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int x,int y){
    struct point temp;

    temp.x=x;
    temp.y=y;

    return temp;
}

int main(){
    struct point p;
    struct rect r;

    p.x=0;
    p.y=0;

    r.pt1=makepoint(0,0);
    r.pt2=makepoint(5,10);

    r.pt1.x;

}