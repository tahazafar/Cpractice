#include <stdio.h>
#include <stdlib.h>
void triangle(int,int);
int main()
{
    triangle(4,4);
    return 0;
}

/*
triangle(int n){
int i;
if(n<1)
    return;

triangle(n-1);

for(i=0;i<n;i++)
    printf("%d",n);

printf("\n");
}
*/

triangle(int n,int k){

printf("%d",n);

if(k>0)
    printf("%d",n);

triangle(n-1,k-1);



}


