/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    cuenta palabras arbol binario

    estructuras en nodo para el almacenamiento y el conteo de las palabras
    herramientas: estructuras, arreglos, punteros
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "libbintree.h"

#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *p);

int main(){

    struct tnode *root;
	char word[MAXWORD];

    root=NULL;
    while(getword(word,MAXWORD)!=EOF)
        if(isalpha(word[0]))
            root=addtree(root,word);
    treeprint(root);
    return 0;
}

/*addtree: agrega un nodo con word o bajo p*/
struct tnode *addtree(struct tnode *p, char *w)
{
    int cond;

    if(p==NULL){
        p=talloc(); //Reserva de memoria
        p->word=mystrdup(w);
        p->count=1;
        p->left=p->right=NULL;
    }else if((cond=strcmp(w,p->word)==0)) //La nueva palabra está y se incrementa el contador
        p->count++;
    else if(cond<0) //La nueva palabra está a la izquierda, es menor
        p->left = addtree(p->left,w);
    else //La nueva palabra está a la derecha, es mayor
        p->right = addtree(p->right,w);

    return p;
}

void treeprint(struct tnode *p)
{
	if (p != NULL) {
        treeprint(p->left);
        printf("%4d %s",p->count,p->word);
        treeprint(p->right);
    }
}