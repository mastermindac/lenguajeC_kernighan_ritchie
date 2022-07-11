#include <stdio.h>

#define ALLOCSIZE 1000000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n;
	} else
		return NULL;
}

void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

char *printbuff(int n)
{
	printf("Ocupado %d\n",ALLOCSIZE-(allocp - allocbuf));
	printf("Libre %d\n",allocbuf + ALLOCSIZE - allocp);
}
