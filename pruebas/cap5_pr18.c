/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    modificando las estructuras de punteros y rectangulos

    modificacion: crear un cuadrado
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

struct rect makesquare(int l){
    struct rect temp;

    temp.pt1=makepoint(0,0);
    temp.pt2=makepoint(l,l);

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