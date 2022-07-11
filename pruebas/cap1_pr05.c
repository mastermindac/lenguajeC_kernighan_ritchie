/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    prueba sobre control de flujo
    modificacion: contar espacios en blanco y tabuladores
*/

#include <stdio.h>

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