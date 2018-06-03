#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int main()
{
    int a[DIM],i,j,c,b,lock,start,d;
    for(i=0;i<DIM;i++){
        scanf("%d",&a[i]);
            }
    for(i=0;i<DIM;i++){c=i;
        for(j=0;j<3;j++){

    if (a[i]<a[i+j+1]){

        b++;
    }
        else { break;
        }}

        if(lock<b){

            lock=b;
            start=c;
            d=start+lock;

        }b=0;
    }
    for(i=start;i<d;i++){

        printf("this is %d",a[i]);
    }

return 0;
}


