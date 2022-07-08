/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa de converion de Celsius a Fahrenheit

    capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de C-F para cel=-10,0, ...,50

main(){
    int fahr,celsius;
    int lower,upper,step;

    lower=-10;
    upper=50;
    step=10;

    celsius = lower;

    while(celsius<=upper){
        fahr=((5*celsius)/9)+32;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
    

}