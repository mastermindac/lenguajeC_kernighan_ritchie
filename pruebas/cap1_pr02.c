/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    prueba sobre conversión de temperaturas
    modificacion: de celsius a fahrenheit
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
        fahr=((9*celsius)/5)+32;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
    

}
