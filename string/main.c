#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* mycalloc(int );
int main()
{
    int i=mycalloc(9);
    printf("%d",i);
    return 0;
}
int* mycalloc(int n) {
    int *p = malloc(n*sizeof(int)), *q;
    for (q=p; q<=p+n; ++q) *q = 0;
    return p;
 }
