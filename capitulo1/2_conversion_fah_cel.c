/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa de converion de Fahrenheit a Celsius

    capitulo1, variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20, ...,300

main(){
    int fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    while(fahr<=upper){
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }
    

}