/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    librería para las funciones de lectura/escritura/ordenación de líneas
*/
#define MAXLEN 10000

int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);

int mygetline(char *line, int limit);
void mystrcpy(char *s, char *t);

void qsort(char *lineptr[],int left,int right);
void qsortGen(char *lineptr[],int left,int right,int (*comp)(void *,void *));

void swap(char *v[],int i,int j);

int mystrcmp(char *s, char *t);
int numcmp(char *s1, char *s2);
double atof(char s[]);