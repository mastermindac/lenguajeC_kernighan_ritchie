/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    librería para las funciones de apoyo en el arbol binario
*/

struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

struct tnode *talloc(void);
char *mystrdup(char *s);

int getword(char *word, int lim);
int getch(void);
void ungetch(int c);