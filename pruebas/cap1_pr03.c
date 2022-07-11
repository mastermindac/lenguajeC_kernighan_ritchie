/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    tabla invertida
    modificacion: cambiar los límites del for para que realice una impresión invertida
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20, ...,300 en sentido inverso

main(){
    int fahr;

    for (fahr=300;fahr>=0; fahr=fahr-20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }

}