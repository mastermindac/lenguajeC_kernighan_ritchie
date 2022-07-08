/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, iteraciones y decisiones
    modificacion: contar lineas, sentencia if
*/

#include <stdio.h>
// copia la entrada a la salida,cuenta retorno de línea, espacios y tabuladores

main(){
    int c,nl,ns,nt;

    nl=ns=nt=0;
    while((c=getchar())!=EOF){
        //Se debe tener en cuenta que por ahora solo se ha aprendido if
        if (c=='\n')
            ++nl;
        if (c==' ')
            ++ns;
        if (c=='\t')
            ++nt;
    }
    printf("%d %d %d\n",nl,ns,nt);
}