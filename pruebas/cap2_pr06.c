/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, iteraciones y decisiones
    modificacion: contar lineas, sentencia if
*/
#include <stdio.h>
/* cuenta digitos, espacios blanco y otros*/


main(){
    int c,i,nwhite,npoint,ncomma,nother;
    int ndigit[10];

    nwhite=nother=ncomma=npoint=0;
    for (i = 0; i < 10; i++)
        ndigit[i]=0;
    while((c=getchar())!=EOF){
        if(c>='0'&&c<='9'){
            ++ndigit[c-'0'];
        }
        else if(c==' '||c=='\n'||c=='\t')
            ++nwhite;
        else if(c=='.')
            ++npoint;
        else if(c==',')
            ++ncomma;
        else
            ++nother;
    }

    //Impresion por pantalla
    printf("digitos =");
    for (i = 0; i < 10; i++)
        printf("%d",ndigit[i]);
    printf(", espacios blancos = %d, otros =%d\n",nwhite,nother);
}