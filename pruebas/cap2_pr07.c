/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    mmodificacion de conversion de temperaturas
    modificacion: crear funcion de conversion
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20, ...,300

float fah2cel(float fahr);

main(){
    float fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    while(fahr<=upper){
        celsius=fah2cel(fahr);
        printf("%3.0f\t%6.2f\n",fahr,celsius);
        fahr=fahr+step;
    }
}

float fah2cel(float fahr){
    return (5.0/9.0)*(fahr-32.0);
}