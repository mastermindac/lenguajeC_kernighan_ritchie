/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, iteraciones y decisiones
    modificacion: contar palabras, if else, define
*/

#include <stdio.h>
// copia la entrada a la salida
#define IN 1 //Esta dentro de la palabra
#define OUT 0 //Esta fuera de la palabra

main(){
    int c,nl,nw,nc,state;

    state=OUT;
    nl=nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if (c=='\n')
            ++nl;
        if(c==' '||c=='\n'||c=='\t')
            state=OUT;
        else if(state==OUT){
            ++nw;
            state=IN;
        }
        
    }
    printf("num lineas:%d %d %d\n",nl,nw,nc);
}